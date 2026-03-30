#include <iostream>
using namespace std;

int main(){
    // binary operators: +, -, *, /, %
    // int a, b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;

    // cout << "Sum: " << a + b << endl;
    // cout << "Difference: " << a - b << endl;
    // cout << "Product: " << a * b << endl;
    // if (b != 0) {
    //     cout << "Quotient: " << a / b << endl;
    //     cout << "Remainder: " << a % b << endl;
    // } else {
    //     cout << "Cannot divide by zero." << endl;
    // }

    // return 0;

    // unary operators: ++, --
    int x = 5;
    cout << "Initial value: " << x << endl;
    cout << "Post-increment: " << x++ << endl; // prints 5, then x becomes 6
    cout << "Current value: " << x << endl; // prints 6
    cout << "Pre-increment: " << ++x << endl; // x becomes 7, then prints 7
    cout << "Current value: " << x << endl; // prints 7
}