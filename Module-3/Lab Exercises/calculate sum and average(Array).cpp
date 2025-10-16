#include <iostream>
using namespace std;
main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100]; 
    int sum = 0;

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }

    double average = (double)sum / n;
cout << "sum of array element = " <<sum << endl;
cout << "Avearge of array elements = " <<average << endl;
}

