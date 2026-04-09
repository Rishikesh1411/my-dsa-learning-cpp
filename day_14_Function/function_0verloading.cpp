#include<iostream>
using namespace std;

void Swap(int &a, int &b) //& is used to pass by reference
{
    int temp = a; //temp is used to store the value of a
    a = b; //a is assigned the value of b
    b = temp; //b is assigned the value of temp (which is the original value of a)
}

void Swap(double &a, double &b) //& is used to pass by reference
{
    double temp = a; //temp is used to store the value of a
    a = b; //a is assigned the value of b
    b = temp; //b is assigned the value of temp (which is the original value of a)
}

int main()
{
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y << endl; // Output: Before swapping: x = 5, y = 10
    Swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl; // Output: After swapping: x = 10, y = 5
    return 0;

    double a = 1.5, b = 2.5;
    cout << "Before swapping: a = " << a << ", b = " << b<< endl; // Output: Before swapping: a = 1.5, b = 2.5
    Swap(a, b);
    cout << "After swapping: a = " << a << ", b = " << b<< endl; // Output: After swapping: a = 2.5, b = 1.5            
    return 0;
}