#include<iostream>
using namespace std;

int main(){

    // //1.print * at row till row times from last
    // int row,col,space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){

    //     //print spaces
    //     for(space=1;space<=(n-row);space++){
    //         cout<<"  ";
    //     }
    //     //print *
    //     for(col=1;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // //2.print number at row till row times from last
    // int row,col,space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){

    //     //print spaces
    //     for(space=1;space<=(n-row);space++){
    //         cout<<"  ";
    //     }
    //     //print numbers
    //     for(col=1;col<=row;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;

    // }

//    //3.print number in in row from 1 to row form last
//    int row,col,space,n;
//    cout<<"Enter number of n : ";
//    cin>>n;
//    for(row=1;row<=n;row++){
//     //print spaces
//     for(space=1;space<=(n-row);space++){
//         cout<<"  ";
//     }
//     //print numbers
//     for(col=1;col<=row;col++){
//         cout<<col<<" ";
//     }
//     cout<<endl;

//    }

    // //5.PRINT ALPHABET PATTERN FROM A TO ROW FROM LAST
    // char row,col;
    // char n;
    // cout<<"Enter number of n : ";
    // cin>>n;

    // int space;
    // for(row='a';row<=n;row++){
    //     //print spaces
    //     for(space='a';space<=(n-row);space++){
    //         cout<<"  ";
    //     }
    //     //print alphabets
        
    //     for(col='a';col<=row;col++){
    //         // char ch = 'A'+col-1;
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }

    // //4.print alphabet at row from A to row form last
    // int row,col,space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){
    //  //print spaces
    //  for(space=1;space<=(n-row);space++){
    //       cout<<"  ";
    //  }
    //  //print alphabets
     
    //  for(col=1;col<=row;col++){
    //     char ch = 'A'+col-1;
    //       cout<<ch<<" ";
    //  }
    //  cout<<endl;
    
    // }

    // //method 2
    // char row,col;
    // int space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row='A';row<('A'+n);row++){
    //  //print spaces
    //  for(space='A';space<('A'+n-(row-'A')-1);space++){
    //       cout<<"  ";
    //  }
    //  //print alphabets
     
    //  for(col='A';col<=row;col++){
    //     // char ch = 'A'+col-1;
    //       cout<<col<<" ";
    //  }
    //  cout<<endl;
    
    // }

    // //method 3
    // int row,col,space,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){
    //  //print spaces
    //  for(space=1;space<=(n-row);space++){
    //       cout<<"  ";
    //  }
    //  //print alphabets
     
    //  for(char col='A';col<=('A'+row-1);col++){
        
    //       cout<<col<<" ";
    //  }
    //  cout<<endl;
    
    // }
    // //6.print alphabet at row from row to A form last
    // int row,n;
    // cout<<"Enter number of n : ";
    // cin>>n;
    // for(row=1;row<=n;row++){
    //     char ch = 'A'+(row-1);
    //     //print spaces
    //     for(int space=1;space<=(n-row);space++){
    //         cout<<"  ";

    //     }
    //     //print alphabets
    //     for(char col='A';col<=ch;col++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

     //7.print number from reverse in opposite pattern
    int row,col,space,n;
    cout<<"Enter number of n : ";
    cin>>n;
    for(row=1;row<=n;row++){
        //print spaces
        for(space=1;space<=(n-row);space++){
            cout<<"  ";
        }
        //print numbers
        for(col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
 
    

}

    