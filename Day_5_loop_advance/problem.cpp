#include <iostream>
using namespace std;

int main(){
    // //1. print number till 50
    // for(int i = 1;i<=50;i=i+1) {
    //     cout<<"Itearation "<<i<<endl;
    // }

    // //2.print characters from A to Z
    // for(char ch = 'A'; ch <= 'Z'; ch = ch + 1) {
    //     cout << ch << endl;
    //     int temp = ch;
    //     cout << "ASCII value of " << ch << " is " << temp << endl;
    // }

    // //3.print number in reverse order from 10 to 1
    // int n;

    // cout<<"Enter a number till n : ";
    // cin>>n;
    // for(int i=n;i>0;i=i-1) {
    //     cout<<"Iteration "<<i<<endl;
    // }

    // //4.print numbers with jump of 3
   
    // int n,i;
    // cout<<"Enter a number till n : ";
    // cin>>n;
    // for(i=1;i<=n;i=i+3){
    //     cout<<"Iteration "<<i<<endl;    
    // }
    
    // 5.print table of a number
    // int num,i;
    // cout<<"Enter a number to print its table: ";
    // cin>>num;
    // for(i=1;i<=10;i=i+1){
    //     cout<<"Table of "<<num <<" * "<<i<<"is :" <<"= "<<num*i<<endl;    
    // }

    //6. calculate power of a number
    // int base, exponent;
    // cout << "Enter base number: ";
    // cin >> base;
    // cout << "Enter exponent number: ";
    // cin >> exponent;
    // int result = 1;
    // for (int i = 1; i <= exponent; i++) {
    //     result = result * base;
    //     cout << "Intermediate result after multiplying by " << base << " for iteration " << i << " is: " << result << endl;
    // }   


    //7.sum of first n natural numbers
    // int n, sum = 0;
    // cout << "Enter a number till n to calculate sum of first n natural numbers: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     sum = sum + i;
    // }
    // cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    //method 2
    // int n;
    // cout << "Enter a number till n to calculate sum of first n natural numbers: ";
    // cin >> n;
    // int sum = (n * (n + 1)) / 2;
    // cout << "Sum of first " << n << " natural numbers is: " << sum << endl;

    //8.sum of squares of first n natural numbers
    // int n, sum = 0;
    // cout << "Enter a number till n to calculate sum of squares of first n natural numbers :";
    // cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     sum = sum + i * i;
    // }
    // cout << "Sum of squares of first " << n << " natural numbers is: " << sum << endl;

    // //method 2
    // int n;
    // cout << "Enter a number till n to calculate sum of squares of first n natural numbers :";
    // cin >> n;
    // int sum = (n * (n + 1) * (2 * n + 1)) / 6;
    // cout << "Sum of squares of first " << n << " natural numbers is: " << sum << endl;

    //9.factorial of a number
    // int n;
    // cout << "Enter a number to calculate its factorial: ";
    // cin >> n;
    // int factorial = 1;
    // for (int i = 1; i <= n; i++) {
    //     factorial = factorial * i;
    // }
    // cout << "Factorial of " << n << " is: " << factorial << endl;

    //10.Prime number check
    // int n, isPrime = 1;
    // cout << "Enter a number to check if it is prime: ";
    // cin >> n;
    // for (int i = 2; i <= n / 2; i++) {
    //     if (n % i == 0) {
    //         isPrime = 0;
    //         break;

    //     }
    //     else {
    //         isPrime = 1;
    //     }
    //     cout << "Iteration " << i << ", isPrime: " << isPrime << endl;
    // }

    // int n;
    // cout << "Enter a number to check if it is prime: ";
    // cin >> n;

    // if (n<2){
    //     cout << n << " is not a prime number." << endl;
    //     return 0;
    // }
    // else {
        
    //     for (int i=2;i<n;i++){
    //         if (n%i==0){
    //             cout << n << " is not a prime number." << endl;
    //             return 0;
    //         }
    //         else {
    //             cout << n << " is a prime number." << endl;
    //             return 0;
    //         }
    //     }



    // }

   //11. Fibonacci series till n terms
    int n;
    cout << "Enter number of terms for Fibonacci series: ";
    cin >> n;
    int t1 = 0, t2 = 1, nextTerm;       
    cout << "Fibonacci Series: " << endl;
    for (int i = 1; i <= n; ++i) {
        cout << t1 << ", ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

}