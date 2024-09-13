#include <iostream>
#include <limits.h>
using namespace std;
int getMax(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int getMin(int arr[][3], int row, int col)
{
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(arr[i][j] < mini){
                mini = arr[i][j];
            }
        }
    }
    return mini;
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
    cout<<"Max  number is : "<<getMax(arr, row, col)<<endl;
    cout<<"Min  number is : "<<getMin(arr, row, col);
    return 0;
}