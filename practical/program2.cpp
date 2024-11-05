#include <iostream>  // Use iostream for C++ style I/O

using namespace std;

// Function to demonstrate call by value
void callByValue(int x) {
    x = x + 10;
    cout << "Inside callByValue, x = " << x << endl;  // Value modified inside the function
}

// Function to demonstrate call by reference
void callByReference(int *x) {
    *x = *x + 10;
    cout << "Inside callByReference, x = " << *x << endl;  // Value modified inside the function
}

int main() {
    int a = 5, b = 5;

    // Call by Value
    cout << "Before callByValue, a = " << a << endl;
    callByValue(a);  // Pass by value
    cout << "After callByValue, a = " << a << endl;  // Value of 'a' remains unchanged outside the function

    // Call by Reference
    cout << "\nBefore callByReference, b = " << b << endl;
    callByReference(&b);  // Pass by reference (passing the address of 'b')
    cout << "After callByReference, b = " << b << endl;  // Value of 'b' changes outside the function

    // Displaying additional information
    cout << "Name - Riya Sinha" << endl;
    cout << "Roll - A45304823045" << endl;
    cout << "Class - BCA 3 A" << endl;

    return 0;
}

