#include <iostream>
using namespace std;
int main()
{
    /*

    *
   * *
  * * *
 * * * *

    */
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        // space
        for (int i = 0; i < n - row - 1; i = i + 1)
        {
            // print *
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << " *  ";
        }
        cout << endl;
    }
}