//transpose of matrix

#include <iostream>
#include <limits.h>
using namespace std;
void transpose(int arr[][3] , int row, int col, int transposeArr[3][3]){
    for(int i = 0 ; i<row; i++){
        for(int j = 0; j<col; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}
void print_array(int arr[][3], int row,int col){
    for(int i = 0 ; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3];
    // Taking input
    cout << "Enter 3x3 matrix value: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing matrix column wise
    cout << endl;
    cout << "Here's the output 3x3 array : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Printing array"<<endl;
    print_array(arr, row, col);
    cout<<"starting Transpose"<<endl;
    int transposeArr[3][3];
    transpose(arr, row, col, transposeArr);
    cout<<"Printing array again"<<endl;
    print_array(arr,row, col);
    return 0;
}