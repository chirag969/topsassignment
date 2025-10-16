#include <iostream>
using namespace std;

// Global variable
int x = 10;
void show() {
    int x = 20;  // Local variable
    cout << "Local variable x in show() = " << x << endl;
}
main() {
    cout << "Global variable x in main() = " << x << endl;
    show();
    cout << "Global variable x after show() = " << x << endl;
}

