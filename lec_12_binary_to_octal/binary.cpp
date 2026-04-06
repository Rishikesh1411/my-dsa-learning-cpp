#include <iostream>
#include <cmath>
using namespace std;


int main(){



    // int binaryNum, octalNum = 0, decimalNum = 0, i = 0;

    // cout << "Enter a binary number: ";
    // cin >> binaryNum;

    // // Convert binary to decimal
    // while (binaryNum != 0) {
    //     int digit = binaryNum % 10;
    //     decimalNum += digit * pow(2, i);
    //     binaryNum /= 10;
    //     i++;
    // }

    // cout << "Decimal equivalent: " << decimalNum << endl;
    

    // // Convert decimal to octal
    // i = 1;
    // while (decimalNum != 0) {
    //     octalNum += (decimalNum % 8) * i;
    //     decimalNum /= 8;
    //     i *= 10;
    // }

    // cout << "Octal equivalent: " << octalNum << endl;

    // //binary to hexadecimal
    // string hexNum = "";
    // while (decimalNum != 0) {
    //     int remainder = decimalNum % 16;
    //     if (remainder < 10) {
    //         hexNum = to_string(remainder) + hexNum;
    //     } else {
    //         hexNum = char(remainder - 10 + 'A') + hexNum;
    //     }
    //     decimalNum /= 16;
    // }
    // cout << "Hexadecimal equivalent: " << hexNum << endl;

    
    // return 0;

    // //decimal to binary
    // int decimalNum, binaryNum = 0, i = 1;
    // cout << "Enter a decimal number: ";
    // cin >> decimalNum;

    // while (decimalNum != 0) {
    //     binaryNum += (decimalNum % 2) * i;
    //     decimalNum /= 2;
    //     i *= 10;
    // }

    // cout << "Binary equivalent: " << binaryNum << endl;

    // //decimal to octal
    // int decimalNum, octalNum = 0, i = 1;
    // cout << "Enter a decimal number: ";
    // cin >> decimalNum;
    // while (decimalNum != 0) {
    //     octalNum += (decimalNum % 8) * i;
    //     decimalNum /= 8;
    //     i *= 10;
    // }
    // cout << "Octal equivalent: " << octalNum << endl;


    // return 0;

    //octal to binary and decimal
    int octalNum, decimalNum = 0, binaryNum = 0, i
    = 0;
    cout << "Enter an octal number: ";
    cin >> octalNum;
    while (octalNum != 0) {
        int digit = octalNum % 
10;
        decimalNum += digit * pow(8, i);
        octalNum /= 10;
        i++;
    }
    cout << "Decimal equivalent: " << decimalNum << endl;
    i = 1;
    while (decimalNum != 0) {
        binaryNum += (decimalNum % 2) *
    i;
        
        
        decimalNum /= 2;
        i *= 10;
    }
    cout << "Binary equivalent: " << binaryNum << endl;
    return 0;


}