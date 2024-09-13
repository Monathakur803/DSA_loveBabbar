#include <iostream>
using namespace std;
int main()
{
   /*

   //               HOLLOW RECTANGLE
   //                   * * * * * *  row0
   //                   *         *  row1
   //                   * * * * * *  row2

   for(int row = 0; row < 3; row = row+1){
      if(row == 0 || row == 2) {
         for(int col = 0; col < 5; col = col+1) {
            cout<<"* ";
         }
      }
      else {
         //Remaining middle rows thai is row 1
         // here there is one star at starting and one at last column
         // first star
         cout<<"* ";
         // There is three spaces between them
         for(int i = 0; i < 3; i = i+1){
            cout<<"  ";
         }
         //last satar
         cout<<"* ";
      }
      //next line
      cout<<endl;
   }
*/
   /*
   print rectngle   * * * * *
                    * * * * *
                    * * * * *

  int row , col;
  //outer loop for row
  for (row=0; row<3; row++){
   //inner loop for column
   for (col = 0; col<5; col++){
      cout<<"🤩 ";
   }
   cout<<endl;
  }
   */
   //   //square rectangle pattern
   // int n, m;
   // cout<<"enter value of row ";
   // cin>>n;
   // cout<<"enter value of column ";
   // cin>>m;
   // for(int row =0; row<n; row += 1){
   //    for(int col = 0; col<m; col++){
   //       cout<<" * ";
   //    }
   //    cout<<endl;
   // }

   // // Hollow rectangle by taking input from user
   // int rowCount, colCount;
   // cout<<"Enter number of row  ";
   // cin>>rowCount;
   // cout<<"Enter number of column  ";
   // cin>>colCount;
   // for(int row = 0; row<rowCount; row = row+1){
   //    if(row == 0 || row == rowCount-1){
   //       for(int col = 0; col < colCount; col = col+1){
   //          cout<<"* ";
   //       }
   //    }
   //    else {
   //       cout<<"* ";
   //       for(int i = 0; i<colCount-2; i = i+1){
   //          cout<<"  ";
   //       }
   //       cout<<"* ";
   //    }
   //    cout<<endl;
   // }

   // HALF PYRAMID
   //  *
   //  * *
   //  * * *
   //  * * * *
   //  int n;
   //  cout<<"enter value of n : ";
   //  cin>>n;
   //  for(int row = 0; row < n;  row = row+1 ){
   //     for(int col = 0; col < row+1; col = col + 1){
   //        cout<<" * ";
   //     }
   //     cout<<endl;
   //  }

   // inverted half pyramid

   int n;
   cout << "enter value of n: ";
   cin >> n;
   for (int row = 0; row < n; row = row + 1)
   {
      for (int col = 0; col < n - row; col = col + 1)
      {
         cout << "* ";
      }
      cout << endl;
   }
   // return 0;
}