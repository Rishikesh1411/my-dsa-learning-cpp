#include <iostream>
using namespace std;

int main() {
    int a;      // normal integer variable
    int *p;     // pointer to integer

    a = 5;      // assign value
    p = &a;     // store address of a in pointer p

    cout << "Value of pointer p (address of a): " << p << endl;
    cout << "Address of a: " << &a << endl;  //&a --ampe
    cout << "Address of pointer p itself: " << &p << endl;
    cout << "Value at address stored in p (*p): " << *p << endl;

    return 0;
}
