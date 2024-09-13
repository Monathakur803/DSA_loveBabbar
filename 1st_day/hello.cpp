#include<iostream>
using namespace std;
int main(){
    cout<<"Shree Ganesha";
    int row, col, n;
    cin>>n;
    for(row = 0; row<n; row = row+1){
        for(col = 0 ; col < row-1 ; col = col +1){
            cout<<"* ";
        }
        cout<<endl;
    }
}