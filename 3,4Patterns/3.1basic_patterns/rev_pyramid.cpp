/*
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *
*/


#include <iostream>
using namespace std;
int main()
{
   // int n;
   // cout << "enter value of n: ";
   // cin >> n;
   // for (int row = 0; row < n ; row = row + 1)
   // {
   //    // space 
   //    for (int i = 0; i < row+1 ; i = i + 1)
   //    {
   //       cout <<"   ";
   //    }
   //    for (int col = 0; col < n*2 - (row*2+1); col = col+ 1)
   //    {
   //       cout<<" * ";
   //    }
   //    cout << endl;
   // }

   int n;
   cout << "enter value of n: ";
   cin >> n;
   for (int row = 0; row < n ; row = row + 1)
   {
      // space 
      for (int i = 0; i < row+1 ; i = i + 1)
      {
         cout <<"  ";
      }
      for (int col = 0; col < n*2 - (row*2+1); col = col+ 1)
      {
         cout<<"* ";//cout<<row+col+1 <<"  ";
      }
      cout << endl;
   }
}
