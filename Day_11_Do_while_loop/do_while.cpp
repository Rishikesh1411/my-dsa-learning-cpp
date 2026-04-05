#include <iostream>
using namespace std;

int main(){
    //1.print number till 5
    // int i = 1;
    // do {
    //     cout << "Iteration " << i << endl;
    //     i = i + 1;
    // } while (i <= 5);

    //2.sum of n numbers
    int n,sum = 0,i=1;
    cout << "Enter a number till n to calculate sum of first n natural numbers: ";
    cin >> n;
    
    do {
        sum = sum + i;
        i++;
    }while (i <= n);
    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;


}
