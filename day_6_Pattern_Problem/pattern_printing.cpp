#include<iostream>
using namespace std;

int main(){

    // //1.print the * 5 time
    // for(int i=1;i<=5;i++) {
    //     cout<<"*";
    // }

    // //2.print the * in 5 rows and 5 column
    // for(int row =1 ;row<=5;row++){
    //     for(int col=1;col<=5;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // //3.print the "10" in 5 rows and 5 column
    // for(int row =1 ;row<=5;row++){
    //     for(int col=1;col<=5;col++){
    //         cout<< " 10 " ;
    //     }
    //     cout<<endl;
    // }

    //4.print 1 to 5 in 5 rows(same print) and 5 column(different print)
    // for(int row =1;row<=5;row++){
    //     for(int col = 1 ;col<=5;col++){
    //         cout<<row<<" ";
    //     }        cout<<endl;
    // }

    // //5.print 1 to 5 in 5 rows 
    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5;col++){
    //         cout<<col<<" ";
    //     }        cout<<endl;
    // }

    //5.print 5 to  in rows sequence at 5 time
    // int row,col;
    // for(row=5;row>=1;row--){
    //     for(col=5;col>=1;col--){
    //         cout<<col<<" ";
    //     }        cout<<endl;    
    // }

    // // //6..print 5 to 1 in col sequence at 5 time in row
    // int row,col;
    // for(row=5;row>=1;row--){
    //     for(col=1;col<=5;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    
    // }

    //7.print square of 1 to 5 in row
    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5;col++){
    //         cout<<col*col<<" ";

    //     }
    //     cout<<endl;
    // }

    //8.print cube of 1 to 5 in row
    // int row,col;
    // for(row=1;row<=5;row++){
    //     for(col=1;col<=5;col++){
    //         cout<<col*col*col<<" ";

    //     }
    //     cout<<endl;
    // }

    //9.print a  to e in 5 columns
    // char row;
    // for(row='a';row<='e';row++){
    //     for(int col=1;col<=5;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // //method 2
    // for(int row=1;row<=5;row++){
    //     char ch='a'+ row -1;
    //     for(int col=1;col<=5;col++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    //10.print A to E in 5 rows
    // for(int row=1;row<=5;row++){
       
    //     for(int col=1;col<=5;col++){
    //         char ch='A'+ col -1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

//     // method 2
//     for(int row=1;row<=5;row++){
//         for(char col='a';col<='e';col++){
            
//             cout<<col<<" ";
//         }
//         cout<<endl;
//    // }

    // method 3

    // for (int row = 1; row <= 5; ++row) {
    //     for (int col = 1; col <= 5; ++col) {
    //         char ch = 'a' + col - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    //11 print 1 to 25 in 5 rows
    // int count = 1;
    // for (int row = 1; row <= 5; row++) {
    //     for (int col = 1; col <= 5; col++) {
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    //method 2

    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            cout<< (row - 1) * 5 + col <<" ";
        }
        cout<<endl;
    }



}