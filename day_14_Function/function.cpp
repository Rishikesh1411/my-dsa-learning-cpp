#include <iostream>
using namespace std;
#include <cmath>

// Function declaration


// //1.prime number function
// bool isPrime(int num)
// {
//     if (num <= 1) return false; // 0 and 1 are not prime numbers
//     for (int i = 2; i <= num / 2; i++) {
//         if (num % i == 0) return false; // If num is divisible by any number other than 1 and itself, it's not prime
//     }
//     return true; // If num is greater than 1 and not divisible by any number other than 1 and itself, it's prime
// }

// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     if (isPrime(num)) {  //Num is here a argument for the function isPrime
//         cout << num << " is a prime number." << endl;
//     } else {
//         cout << num << " is not a prime number." << endl;
//     }
//     return 0;


// }

// //2.sum function

// int addSum(int a,int b)
// {
//     return a+b;
// }

// int main()
// {
//     int num1,num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     int sum = addSum(num1,num2);
//     cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
//     return 0;

// }

// //3.multiplication function
// int multiply()
// {
//     int num1,num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     return num1*num2;
// }

// int main()
// {
//     int result = multiply();
//     cout << "The product of the two numbers is: " << result << endl;
// }

// //4.void function
// void greet()
// {
//     cout << "Hello! Welcome to C++ programming." << endl;
// }

// int main()
// {
//     greet();
//     return 0;
// }
bool isPrime(int num)
{
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false; // If num is divisible by any number other than 1 and itself, it's not prime
    }
    return true; // If num is greater than 1 and not divisible by any number other than 1 and itself, it's prime
}

int Factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; // fact = fact * i
    }
    return fact;

}

int main()
{
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    //A is prime or not
    if (isPrime(a)) {  //Num is here a
        cout << a << " is a prime number." << endl;
    } else {
        cout << a << " is not a prime number." << endl;
    }
    //A ka Factorial
    int result = Factorial(a);
    cout << "Factorial of " << a << " is: " << result << endl;

     //B is prime or not
    if (isPrime(b)) {  //Num is here a
        cout << b << " is a prime number." << endl;
    } else {
        cout << b << " is not a prime number." << endl;
    }

    //B ka Factorial
    result = Factorial(b);
    cout << "Factorial of " << b << " is: " << result << endl;

    return 0;

    //B-A is prime or not
    if (isPrime(b-a)) {  //Num is here a
        cout << b-a << " is a prime number." << endl;
    } else {
        cout << b-a << " is not a prime number." << endl;
    }

    //B-A ka Factorial
    result = Factorial(b-a);
    cout << "Factorial of " << b-a << " is: " << result << endl;
    return 0;

    


}