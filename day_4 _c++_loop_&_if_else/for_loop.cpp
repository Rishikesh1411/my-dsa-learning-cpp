#include<iostream>
using namespace std;

// int main() {
//     // for loop example
//     for (int i = 1; i <= 5; i++) {
//         cout << "Iteration " << i << endl;
//     }   

//     return 0;
// }

int main() {
    // //1.print squre of firdt 5 natural numbers
    // for (int i = 1; i <= 5; i++) {
    //     cout << "Square of " << i << " is " << i * i << endl;
    // }

    // //2.print first 10 even numbers
    // for(int i=1; i <= 10; i++) {
    //     cout<<"Even number "<<i<<" is: "<<2*i<<endl;


    // }

    // //3.print first 10 odd numbers
    // for(int i=1; i <= 10; i++) {
    //     cout<<"Odd number "<<i<<" is: "<<2*i-1<<endl;
    
    //   }

    // return 0;

    //4.find all even num till n
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            cout << i << " is Even number" << endl;
        }
    }
}