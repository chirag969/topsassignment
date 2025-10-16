#include <iostream>
using namespace std;
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Division by zero not allowed." << endl;
    }
}

main() {
    float num1, num2;
    int choice;

    cout<<"Enter The Number 1:";
	cin >> num1;
	cout<<"Enter The Number 2:";
	cin >> num2;

    cout << "\nChoose operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "\nResult: ";
    switch (choice) {
        case 1:
            cout << add(num1, num2);
            break;
        case 2:
            cout << subtract(num1, num2);
            break;
        case 3:
            cout << multiply(num1, num2);
            break;
        case 4:
            cout << divide(num1, num2);
            break;
        default:
            cout << "Invalid choice!";
    }
}

