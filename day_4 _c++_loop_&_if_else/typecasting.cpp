#include<iostream>
using namespace std;

int main() {
    char c = 'd';      // character variable
    int a = c;         // implicit type casting from char to int

    // Displaying the character and its ASCII value-in 8 bit-256 values

    cout << "Character: " << c << endl;
    cout << "ASCII value: " << a << endl;

    return 0;
}