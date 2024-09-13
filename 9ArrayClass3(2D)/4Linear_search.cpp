#include <iostream>
using namespace std;
// making function for searching key
bool linear_search(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
                return true;
        }
    }
    // if value is not present
    return false;
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
    int key;
    cout << "enter key to find: " << endl;
    cin >> key;
    // cout<<linear_search(arr, row, col, key);  //calling print sum function
    if (linear_search(arr, row, col, key))
    {
        cout <<"True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}