CREATE DATABASE school_db;
USE school_db;
CREATE TABLE student (
    student_id INT PRIMARY KEY,
    student_name VARCHAR(50),
    age INT,
    address VARCHAR(50)
);
INSERT INTO student (student_id, student_name, age, address)
VALUES
(101, 'karan', 21, 'surat'),
(102, 'deep', 32, 'bharuch'),
(103, 'jayesh', 24, 'ahmedabad'),
(104, 'ramesh', 28, 'gandhinagar'),
(105, 'hemant', 29, 'valsad');
SELECT student_name, age
FROM student;
SELECT *
FROM student
WHERE age > 10;
CREATE TABLE teachers (
    teacher_id INT PRIMARY KEY,
    teacher_name VARCHAR(50) NOT NULL,
    subject VARCHAR(50) NOT NULL,
    email VARCHAR(100) UNIQUE
);
ALTER TABLE student
ADD teacher_id INT;
ALTER TABLE student
ADD CONSTRAINT fk_teacher
FOREIGN KEY (teacher_id)
REFERENCES teachers(teacher_id);
CREATE TABLE courses (
    course_id INT PRIMARY KEY,
    course_name VARCHAR(100),
    course_credits INT
);
CREATE DATABASE university_db;
ALTER TABLE courses
ADD course_duration VARCHAR(50);
ALTER TABLE courses
DROP COLUMN course_credits;
select * from teachers;
select * from student;
select * from courses;
use school_db;
drop table teachers;
drop table student;
show tables;
use school_db;
DROP TABLE student;
show tables;
alter table courses;
insert into courses values (201,'FS Python','9 months'),
(202,'FS Java','1 year 3 months'),
(203,'Graphic Designing','1 year 6 months');
select * from courses;
use school_db;
UPDATE courses
SET course_duration = '1 year'
WHERE course_id = 202;
select * from courses;
USE school_db;
delete from courses
where course_id = '203';
select * from courses
order BY course_duration DESC
LIMIT 2;

CREATE USER 'user1'@'localhost' IDENTIFIED BY 'user1password';
CREATE USER 'user2'@'localhost' IDENTIFIED BY 'user2password';

GRANT SELECT ON school_db.courses TO 'user1'@'localhost';
start transaction;

insert into courses (course_id, course_name, course_duration)
values
(101, 'C Programming', 3),
(102, 'C++ Programming', 4),
(103, 'Python ', 5);
COMMIT;
start transaction;
INSERT INTO courses (course_id, course_name, course_duration)
VALUES
(104, 'Java', 6),
(105, 'HTML & CSS', 2);
ROLLBACK;
START TRANSACTION;
SAVEPOINT before_update;
UPDATE courses
SET course_duration = 7
WHERE course_id = 103;
ROLLBACK TO before_update;
COMMIT;
drop table employees;
drop table departments;
CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    emp_name VARCHAR(50),
    dept_id INT,
    salary DECIMAL(10,2)
);
CREATE TABLE departments (
    dept_id INT PRIMARY KEY,
    dept_name VARCHAR(50)
);
INSERT INTO departments (dept_id, dept_name)
VALUES
(1, 'Computer'),
(2, 'Mechanical'),
(3, 'Civil');
INSERT INTO employees (emp_id, emp_name, dept_id, salary)
VALUES
(101, 'Karan', 1, 25000),
(102, 'Deep', 2, 30000),
(103, 'Jayesh', 1, 28000),
(104, 'Nirali', 3, 27000),
(105, 'Dhruv', 1, 26000);
SELECT dept_id, COUNT(emp_id) AS total_employees
FROM employees
GROUP BY dept_id;
SELECT dept_id, AVG(salary) AS average_salary
FROM employees
GROUP BY dept_id;
CREATE VIEW employee_department_view AS
SELECT 
    e.emp_id,
    e.emp_name,
    e.salary,
    d.dept_name
FROM employees e
JOIN departments d ON e.dept_id = d.dept_id;
SELECT * FROM employee_department_view;

CREATE OR REPLACE VIEW employee_department_view AS
SELECT 
    e.emp_id,
    e.emp_name,
    e.salary,
    d.dept_name
FROM employees e
JOIN departments d ON e.dept_id = d.dept_id
WHERE e.salary >= 50000;
SELECT * FROM employee_department_view;
SELECT * FROM employee_department_view;
CREATE TABLE employee_log (
    log_id INT AUTO_INCREMENT PRIMARY KEY,
    emp_id INT,
    emp_name VARCHAR(50),
    action VARCHAR(50),
    action_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
INSERT INTO employees (emp_id, emp_name, dept_id, salary)
VALUES (106, 'Mihir', 2, 55000);

SELECT * FROM employee_log;
ALTER TABLE employees
ADD COLUMN last_modified TIMESTAMP DEFAULT CURRENT_TIMESTAMP
ON UPDATE CURRENT_TIMESTAMP;
DELIMITER //

CREATE TRIGGER before_employee_update
BEFORE UPDATE ON employees
FOR EACH ROW
BEGIN
    SET NEW.last_modified = CURRENT_TIMESTAMP;
END //

DELIMITER ;
UPDATE employees
SET salary = 60000
WHERE emp_id = 106;

SELECT emp_id, emp_name, salary, last_modified FROM employees;
show databases
