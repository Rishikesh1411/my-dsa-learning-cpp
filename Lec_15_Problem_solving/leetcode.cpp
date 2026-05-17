#include <iostream>
#include <cmath>
using namespace std;

int countDigit(int num)
{
    if (num == 0)
        return 1;

    int digit = 0;
    if (num < 0)
        num = -num;

    while (num)
    {
        digit++;
        num /= 10;
    }
    return digit;
}

int intPow(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        result *= base;
        exp--;
    }
    return result;
}

bool Armstrong(int num, int digit)
{
    if (num < 0)
        return false;

    int temp = num;
    int rem;
    int ans = 0;
    while (temp)
    {
        rem = temp % 10;
        ans += intPow(rem, digit);
        temp /= 10;
    }

    return ans == num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digit = countDigit(num);
    bool ans = Armstrong(num, digit);

    if (ans)
        cout << num << " is an Armstrong number\n";
    else
        cout << num << " is not an Armstrong number\n";

    return 0;
}
