#include<iostream>
using namespace std;
main(){
	int i,num;
	cout << "Enter the number: ";
	cin >> num;
	
	cout << "Multiplication Table of " << num <<":"<< endl;
	
	for(i=1; i<=10; i++){
		cout << num << "x" << i << " = " << num * i << endl;
	} 
}

