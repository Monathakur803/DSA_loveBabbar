/*

         *
       *   *
     *       *
   *           *
 *               *
 *               *
   *           *
     *       *
       *   *
         *


*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    for(int row = 0; row< n ; row = row+ 1){
        //space
        for(int i = 0; i < n- row - 1 ; i = i + 1){
            cout<<"  ";
        }
        //print 1st and last star
        for(int col = 0 ; col < 2*row + 1; col = col + 1){
            if (col == 0 || col == 2*row){
                cout<<" *";
            }
            // else if (col == 2*row){
            //     cout<<" *";
            // }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    for(int row = 0 ; row < n ; row = row + 1 ){
        //spaces
        for(int i = 0; i < row; i = i + 1){
            cout<<"  ";
        }
        //stars
        for(int col = 0 ; col < n*2 - (row*2-1); col = col + 1){
            //1st and lazast 
            if(col == 0|| col == 2*n-2*row-2){
                cout<<" *";
            }
            // else if(col == 2*n-2*row-2){
            //     cout<<" *";
            // }
            else{
                //middle space
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}

