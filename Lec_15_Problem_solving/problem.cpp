#include<iostream>
using namespace std;

//function to convert small letter to capital letter 
char convert(char ch){
    char capital = ch  - ('a' - 'A');
    return capital;
}
int main(){
    //1.chnage small letter to capital letter
    char ch;
    cout<<"Enter a small letter: ";
    cin>>ch;

    cout<<convert(ch)<<endl;
}