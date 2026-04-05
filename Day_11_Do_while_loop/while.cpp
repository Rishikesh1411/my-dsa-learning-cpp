#include <iostream>
using namespace std;

int main(){
    // //1.print number till 5
    // int i = 1;
    // while (i <= 5) {
    //     cout << "Iteration " << i << endl;
    //     i = i + 1;
    // }

    // //2. table of input number
    // int num, i = 1;
    // cout << "Enter a number to print its table: ";
    // cin >> num;
    // while (i <= 10) {
    //     cout << "Table of " << num << " * " << i << " is: " << num * i << endl;
    //     i = i + 1;
    // }

    //3. print all number which divide n without leaving a remainder
    // int n,i=1;
    // cout << "Enter a number to find its factors: ";
    // cin >> n;
    // cout << "Factors of " << n << " are: ";
    // while (i <= n) {
    //     if (n % i == 0) {
    //         cout << i << " ";
    //         i = i + 1;
    //     }
    //     else {
    //         i = i + 1;
    //     }
        
    // }

    //4.even numbers from 1 to n
    // int n,i =1;
    // cout << "Enter a number till n to print even numbers: ";
    // cin >> n;
    // while (i <= n) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
            
    //     }
    //     i++;
       
    // }

    //5.break statement
    // int n, i = 1;
    // cout << "Enter a number till n to print even numbers: ";
    // cin >> n;
    // while (i <= n) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     }
    //     if (i == 10) {
    //         break;
    //     }
    //     i++;
    // }

    //6.continue statement
    int n, x;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter x (number to skip): ";
    cin >> x;

    int i = 1;  // start from 1
    while (i <= n) {
        if (i == x) {
            cout << "Skipping " << x << endl;
            i++;            // move to next number
            continue;       // skip printing x
        }
        cout << "Place " << i << ": " << i << endl;
        i++;  // increment counter
    }

    return 0;





}