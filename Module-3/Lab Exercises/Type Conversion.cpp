#include <iostream>
using namespace std;
main() {
    int a = 10;
    float b = 3.5;
    // Implicit conversion: int (a) is converted to float automatically
	 float c = a + b;

    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;
    cout << "Result (Implicit Conversion): " << c << endl;
}

