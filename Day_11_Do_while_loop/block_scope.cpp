#include <iostream>
using namespace std;

int main(){
    //1.block scope
    int x = 10; // x is declared in the main function scope
    cout << "Value of x in main function: " << x << endl;
    {
        int x = 20; // x is declared in the block scope, it shadows the x in main function
        cout << "Value of x in block scope: " << x << endl;
    }
    cout << "Value of x in main function after block: " << x << endl; // x in main function is unaffected by the block scope
    return 0;
}

//2.function
