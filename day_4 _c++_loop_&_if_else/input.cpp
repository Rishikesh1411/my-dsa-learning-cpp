#include<iostream>
using namespace std;


// int main(){
//     int a,b;
//     cin>>a;
//     cin>>b;

//     cout<<"The value of a+b  is: "<<a+b<<endl;
// }

//TYPE CASTING EXAMPLE

// int main() {
//     int num = 10;
//     double result = num / 3;  // int divided by int → result is double
//     cout << "Result: " << result << endl; // Output: 3
//     return 0;
// }



int main() {
    char c = 'd';      // character variable
    int a = c;         // implicit type casting from char to int

    cout << "Character: " << c << endl;
    cout << "ASCII value: " << a << endl;

    return 0;
}