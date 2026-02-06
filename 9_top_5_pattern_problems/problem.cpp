#include<iostream>
using namespace std;

int main(){

    // //1.print * in pyramid format till 5 th row
    // int row,col,space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){

    //     //print spaces
    //     for(space=1;space<=(n-row);space++){
    //         cout<<"  ";
    //     }
    //     //print *
    //     for(col=1;col<=(2*row-1);col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // //2.print number in pyramid format till 5 th row
    // int row,col,dec,n,space;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     //print spaces
    //     for(space=1;space<=n-row;space++){
    //         cout<<"  ";

    //     }
    //     //print numbers
    //     for(col=1;col<=row;col++){
    //         cout<<col<<" ";

    //     }
    //     //print numbers in decreasing order
    //     for(dec=row-1;dec>=1;dec--){
    //         cout<<dec<<" ";
    //     }
    //     cout<<endl;
    // }

    //3.PRINT * IN REVERSE PYRAMID FORMAT TILL 5 TH ROW
    // int row,col,space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=n;row>=1;row--){

    //     //print spaces
    //     for(space=1;space<=(n-row);space++){
    //         cout<<"  ";
    //     }
    //     //print *
    //     for(col=1;col<=(2*row-1);col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    //4.PRINT NUMBER IN REVERSE DIMOND FORMAT TILL 5 TH ROW

    // int row,col,n,space;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=n;row>=1;row--){

    //     // print *
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }

    //     //print spaces
    //     for(space=1;space<=(2*n-2*row);space++){
    //         cout<<"  ";
    //     }

    //     // print *
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }


    // for(row=1;row<=n-1;row++){

    //     // print *
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }

    //     //print spaces
    //     for(space=1;space<=(2*n-2*row);space++){
    //         cout<<"  ";
    //     }

    //     // print *
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // //5.print star in butterfly shape
    // int row,col,n,space;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){

    //     //print star (*)
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     //print spaces
    //     for(space=1;space<=(2*n-2*row);space++){
    //         cout<<"  ";
    //     }
    //     //print star (*)
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // for(row=n-1;row>=1;row--){

    //     //print star (*)
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     //print spaces
    //     for(space=1;space<=(2*n-2*row);space++){
    //         cout<<"  ";
    //     }
    //     //print star (*)
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    ///6.print * in dimond shape
    int row,col,n,space;
    cout<<"Enter number of n : ";
    cin>>n;
    for(row=1;row<=n;row++){

        //print spaces
        for(space=1;space<=(n-row);space++){
            cout<<"  ";
        }
        //print *
        for(col=1;col<=(2*row-1);col++){
            cout<<"* ";
        }
        cout<<endl;

    }
    for(row=n-1;row>=1;row--){

        //print spaces
        for(space=1;space<=(n-row);space++){
            cout<<"  ";
        }
        //print *
        for(col=1;col<=(2*row-1);col++){
            cout<<"* ";
        }
        cout<<endl;

    }

     return 0;









}