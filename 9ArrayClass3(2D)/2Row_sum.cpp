#include<iostream>
using namespace std;
//making function for sum of rows
void print_sum(int arr[][3], int row, int col){
    //row sum -> row wise trivarsal
    cout<<"printing row wise sum: "<<endl;
    for(int i = 0; i<row; i++){
        int sum = 0;
        cout<<"sum of "<<i<<" row -> ";
        for(int j = 0; j< col; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl; 
    }
}
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3];
    //Taking input
    cout<<"Enter 3x3 matrix value: "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j< col; j++){
            cin>>arr[i][j];
        }
    }
    //printing matrix
    cout<<endl;
    cout<<"Here's the output 3x3 array : "<<endl;
    for(int i = 0; i<row; i++){
        for(int j = 0; j< col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
    print_sum(arr, row, col);  //calling print sum function
    return 0;
}