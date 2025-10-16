#include<iostream>
using namespace std;
int factorial(int n) {
	if(n==0 || n==1){
		return 1;
	} else {
		return n * factorial(n-1);
	}
}
main(){
	int num;
	cout << "Enter number to find factorial Of The Number: ";
	cin >> num;
	
	if(num < 0){
		cout << "Factorial of a negative number is not defined" << endl;
   } else {
   		cout << "Factorial of " << num << " = " << factorial(num) << endl;
	 
   }
}

