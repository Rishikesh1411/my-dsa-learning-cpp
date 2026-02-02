#include<iostream>
using namespace std;

// int main(){
//     int package;
//     cin>>package;

//     if (package>10) {
//         cout<<"Accepted"<<endl;
//     }
//     else {
//         cout<<"Rejected"<<endl;
//     }

// }

// passing marks example
int main(){

    //1.passing marks example
    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;

    // if (marks>=33) {
    //     cout<<"Pass"<<endl;
    // }
    // else {
    //     cout<<"Fail"<<endl;
    // }

    //2. a>b example

    // int a,b;
    // cout<<"Enter your first numbers: ";
    // cin>>a ;
    // cout<<"Enter yout Second number: ";
    // cin>>b ;

    // if (a>b){
    //     cout<<"a is greater than b"<<endl;
    // }
    // else {
    //     cout<<"b is greater than a"<<endl;
    // }

    //3.Odd and Even number example

    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;
    // if (number%2==0) {
    //     cout<<"The number is Even"<<endl;
    // }
    // else {
    //     cout<<"The number is Odd"<<endl;
    // }
    
    // //4. Positive , Negative or Zero example
    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;
    // if (number>0) {
    //     cout<<"The number is Positive"<<endl;
    // }
    // else if(number==0) {
    //     cout<<"The number is Zero"<<endl;
    // }
    // else {
    //     cout<<"The number is Negative"<<endl;
    // }

    // //5. Vowel or consonent example
    // char ch;
    // cout<<"Enter a character: ";
    // cin>>ch;
    // if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
    //     cout<<"The character is Vowel"<<endl;
    // }
    // else {
    //     cout<<"The character is Consonent"<<endl;
    // }

    //6.name of day example
    int day;
    cout<<"Enter a number between 1 to 7: ";
    cin>>day;
    if (day==1) {
        cout<<"Monday"<<endl;
    }
    else if (day==2) {
        cout<<"Tuesday"<<endl;
    }
    else if (day==3) {
        cout<<"Wednesday"<<endl;
    }
    else if (day==4) {
        cout<<"Thursday"<<endl;
    }
    else if (day==5) {
        cout<<"Friday"<<endl;
    }
    else if (day==6) {
        cout<<"Saturday"<<endl;
    }
    else if (day==7) {
        cout<<"Sunday"<<endl;
    }
    else {
        cout<<"Invalid Input! Please enter a number between 1 to 7."<<endl;
    }

}