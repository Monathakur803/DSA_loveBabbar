#include <iostream>
using namespace std;
int main()
{
  /*
       *   *   *   *   *   *   *
         *   *   *   *   *   *
           *   *   *   *   *
             *   *   *   *
               *   *   *
                 *   *
                   *

   */

  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  for (int row = 0; row < n; row = row + 1)
  {
    // space
    for (int i = 0; i < row; i = i + 1)
    {
      // print *
      cout << "  ";
    }
    // stars
    for (int col = 0; col < n - row; col = col + 1)
    {
      cout << " *  ";
    }
    cout << endl;
  }
}