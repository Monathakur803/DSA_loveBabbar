/*
    1
   1 2
  1   3
 1     4
1 2 3 4 5

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int row=0;row<n;row=row+1){
        //space
        for(int i = 0; i<n-row-1;i =i+1){
            cout<<" ";
        }
        //numbers with spaces between them
        int start = 1;
        for(int col = 0;col<2*row+1;col =col+1){
            //if 1st row or last row
            if (row == 0 ||row == n-1){
                if(col%2 == 0){
                    cout<<start;
                    start = start +1;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                //first column
                if(col == 0) {
                    cout<<1;
                }
                else if(col == 2*row+1-1){
                    cout<<row+1;
                }
                else {
                    cout<<" ";
                }
            }
             
        }
        cout<<endl;
     }

}
