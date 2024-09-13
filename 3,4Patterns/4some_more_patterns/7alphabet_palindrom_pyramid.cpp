#include<iostream>
using namespace std;
int main(){
    /*
    1 
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
*/
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    // for(int row = 0; row<n;row = row+1){
    //     int col;
    //     for(col = 0 ; col< row+1;col = col+1){
    //         cout<<col+1<<" ";
    //     }
    //     //reverse countingprinting
    //     for(col =col-1; col>=1; col = col-1){
    //         cout<<col<<" ";
    //     }
    //     cout<<endl;
    // }

    /*
    A 
    A B A
    A B C B A
    A B C D C B A
    A B C D E D C B A
    */
    for(int row = 0; row<n;row = row+1){
        int col;
        for(col = 0 ; col< row+1;col = col+1){
            int ans = col+1;
            char ch = ans + 'A' - 1;
            cout<<ch<<" ";
        }
        //reverse countingprinting
        for(col =col-1; col>=1; col = col-1){
            int ans = col;
            char ch =  ans + 'A' - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}