/*
    1
   232
  34543
 4567654
567898765

 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {

        // space
        for (int i = 0; i < n - row - 1; i = i + 1)
        {
            cout << " ";
        }

        // numbers
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << col + row + 1;
        }

        // reverse counting
        int start = 2 * row;
        for (int col = 0; col < row; col = col + 1)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
    }

    // /*
    // 1
    // 2 3
    // 3 4 5
    // 4 5 6 7
    // 5 6 7 8 9
    // */
    // for(int row = 0; row<n;row=row+1){
    //     //row+1 elements print krne wle hai
    //     //int start = row+1;
    //     for(int col=0;col<row+1;col=col+1){
    //         // cout<<start<<" ";
    //         // start = start+1;
    //         //OR
    //         cout<<col+row+1<<" ";
    //     }
    //     cout<<endl;
    // }
}
