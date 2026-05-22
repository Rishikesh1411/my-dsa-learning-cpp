#include <iostream>
#include <cmath>   // for pow() and round()
using namespace std;

// Function to count digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    int digits = countDigits(num);
    int sum = 0, temp = num;

    while (temp != 0) {
        int rem = temp % 10;
        sum += static_cast<int>(round(pow(rem, digits))); // FIX: round before casting
        temp /= 10;
    }

    return sum == num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;

    return 0;
}