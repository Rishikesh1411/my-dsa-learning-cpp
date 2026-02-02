#include<iostream>
using namespace std;

int main(){

    // //1.print * in each row till row tmes
    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // //2. print number pattern
    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=row;col++){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    //3.print row number at row times
    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=row;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    //4.print numver in reverse pattern
    int row,col;
    for(row=1;row<=5;row++){
        for(col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }







}