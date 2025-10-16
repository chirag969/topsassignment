#include <iostream>
#include <string>
using namespace std;
main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        cout << str << " is a Palindrome." << endl;
    } else {
        cout << str << " is Not a Palindrome." << endl;
    }
}

