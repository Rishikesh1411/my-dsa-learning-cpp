#include <iostream>
using namespace std;

// Function with default parameters
//1.PASS BY VALUE
void greet(string name = "Guest", string greeting = "Hello")
{
    cout << greeting << ", " << name << "!" << endl;
}

//2.PASS BY REFERENCE
void swap(int &a, int &b) //& is used to pass by reference
{
    int temp = a; //temp is used to store the value of a
    a = b; //a is assigned the value of b
    b = temp; //b is assigned the value of temp (which is the original value of a)
}

int main()
{   //1.PASS BY VALUE
    greet(); // Output: Hello, Guest!
    greet("Alice"); // Output: Hello, Alice!
    greet("Bob", "Welcome"); // Output: Welcome, Bob!

    //2.PASS BY REFERENCE
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl; // Output: Before swapping: x = 5, y = 10
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl; // Output: After swapping: x = 10, y = 5

    return 0;
}