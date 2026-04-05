#include <iostream>
using namespace std;

int main(){
    // for(int i=1; i<=10; i++){
    //     if(i==4){
    //         break;   // loop stops completely here
    //     }
    //     cout << "Iteration " << i << endl;
    // }

    for(int i=1; i<=10; i++){
        if(i==4){
            continue;   // loop skips this iteration
        }
        cout << "Iteration " << i << endl;
    }
}