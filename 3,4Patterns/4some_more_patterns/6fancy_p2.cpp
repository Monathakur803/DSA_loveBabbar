/*
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5   --------
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    //upper half part
    for(int row = 0; row < n; row = row+1){
        for(int col = 0; col < row + 1 ; col = col + 1){
            cout<<row+1;
            if(col != row){ //if it is last row than do not print star
                cout<<"*";
            }
        }
        cout<<endl;
    }
    //lower half part
    for(int row = 0; row < n; row = row+1){
        for(int col = 0; col < n - row ; col = col + 1){
            cout<<n - row;
            if(col != n-row-1){ //if it is last row than do not print star
                cout<<"*";
            }
        }
        cout<<endl;
    }
}