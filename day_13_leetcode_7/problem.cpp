#include <iostream>
using namespace std;
//1.leetcode 258. Add Digits
// class Solution {
// public:
//     int addDigits(int num) {
//         while (num > 9) {
//             int ans = 0;
//             while (num != 0) {
//                 int rem = num % 10;
//                 num = num / 10;
//                 ans += rem;
//             }
//             num = ans;
//         }
//         return num;
//     }
// };

// int main() {
//     Solution sol;

//     // Example 1
//     int num1 = 38;
//     cout << "addDigits(" << num1 << ") = " << sol.addDigits(num1) << endl;
//     // Expected output: 2 (since 3+8=11, then 1+1=2)

//     // Example 2
//     int num2 = 1234;
//     cout << "addDigits(" << num2 << ") = " << sol.addDigits(num2) << endl;
//     // Expected output: 1 (since 1+2+3+4=10, then 1+0=1)

//     return 0;
// }

// //gfg-leap year
// class Solution {
// public:
//     bool isLeap(int year) {
//         if (year % 400 == 0) {
//             return true;
//         } else if (year % 100 != 0 && year % 4 == 0) {
//             return true;
//         } else {
//             return false;
//         }
//     }
// };

// int main() {
//     Solution sol;

//     // Example 1
//     int year1 = 2020;
//     cout << "isLeap(" << year1 << ") = " << sol.isLeap(year1) << endl;
//     // Expected output: 1 (true, since 2020 is a leap year)

//     // Example 2
//     int year2 = 1900;
//     cout << "isLeap(" << year2 << ") = " << sol.isLeap(year2) << endl;
//     // Expected output: 0 (false, since 1900 is not a leap year)

//     // Example 3
//     int year3 = 2000;
//     cout << "isLeap(" << year3 << ") = " << sol.isLeap(year3) << endl;
//     // Expected output: 1 (true, since 2000 is a leap year)

//     return 0;
// }

