//OOP
#include<iostream>
using namespace std;
class Rectangle{
public:
	double width, length;
	
	void input(){
		cout << "Enter the length: ";
		cin >> length;
		cout << "Enter the width: ";
		cin >> width;
	}
	double area(){
		return length * width;
	}
	
};
main(){
	Rectangle r1;
	r1.input();
	cout << "Area of rectangle: " << r1.area() << endl;
}

