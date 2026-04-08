#include <iostream>
using namespace std;

// Function with default parameters
void greet(string name = "Guest", string greeting = "Hello") {
    cout << greeting << ", " << name << "!" << endl;
}

int main()
{
    // Calling greet with no arguments, will use default parameters
    greet(); // Output: Hello, Guest!

    // Calling greet with one argument, will use default greeting
    greet("Alice"); // Output: Hello, Alice!

    // Calling greet with both arguments
    greet("Bob", "Welcome"); // Output: Welcome, Bob!

    return 0;
}
