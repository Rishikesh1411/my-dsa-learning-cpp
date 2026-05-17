#include <iostream>
#include<cmath>
using namespace std;

int countDigit(int num)
{
    int digit = 0;
    while(num)
    {
        digit++;
        num /= 10;
    }
    return digit;
}

bool Armstrong(int num , int digit)
{
    int temp = num,rem,ans=0;
    while(temp)
    {
        rem = temp%10;
        ans = ans+pow(rem,digit);
        temp /= 10;
    }
    if(ans == num)
    {
        return true;
    }
    else
    {
        return false;

    }
}

int main()
{
    // 1.Armstrong number
    int num;
   
    cout << "Enter a number: ";
    cin >> num;
    int digit = countDigit(num);
    bool ans =  Armstrong(num, digit);
    
}