#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a palindrome
bool isNumberPalindrome(int num) {
    int reversed = 0, original = num, remainder;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}

// Function to check if a string is a palindrome
bool isStringPalindrome(const string &str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false; // Not a palindrome
        }
    }
    return true; // Palindrome
}

int main() {
    int choice;
    cout << "Choose:\n1. Check Number Palindrome\n2. Check String Palindrome\n";
    cin >> choice;

    if (choice == 1) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        if (isNumberPalindrome(num)) {
            cout << num << " is a palindrome." << endl;
        } else {
            cout << num << " is not a palindrome." << endl;
        }
    } else if (choice == 2) {
        string str;
        cout << "Enter a string: ";
        cin >> str;
        if (isStringPalindrome(str)) {
            cout << "\"" << str << "\" is a palindrome." << endl;
        } else {
            cout << "\"" << str << "\" is not a palindrome." << endl;
        }
    } else {
        cout << "Invalid choice." << endl;
    }

    
    // Displaying additional information
    cout << "Name - yashab fatma" << endl;
    cout << "Roll - A45304823026" << endl;
    cout << "Class - BCA 3 A" << endl;


    return 0;
}
