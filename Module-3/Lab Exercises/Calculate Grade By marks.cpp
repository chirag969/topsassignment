#include<iostream>
using namespace std;
main() {
	int marks;
	cout << "Enter the marks: ";
	cin >> marks;
	
	if(marks>=90){
		cout << "Grade A";
	} else if(marks>=80){
		cout << "Grade B";
	} else if(marks>=60){
		cout << "Grade C";
	} else if(marks>=40) {
		cout << "Gade D";
	} else if(marks>=30){
		cout<<"Grade E";
	}
	else{
		cout << "Student marks is less then 40";
	}	

}

