#include<iostream>
using namespace std;
int main()
{
    /*
    //decleration of 2D array
    int arr[3][3];   

    //initiliztion of 2D array
    int brr[3][3] = { 
        {1,2,3},  //row 0
        {4,5,6},  //row 1
        {7,8,9} }; //row 2
    //cout<<brr[1][3];  // o/p will be 2nd row 2nd column i.e 9

    //printing array row wise
    //outer loop for row
    cout<<"Printing row wise"<<endl;
    for(int i = 0; i<3; i ++){
        //for every row we need to print value of each column
        for(int j = 0; j<3; j++){
            cout<<brr[i][j] <<" ";
        }
        cout<<endl;
    }

    //printing array column wise
    cout<<"Printing column wise"<<endl;
    for(int i = 0; i<3; i ++){
        //for every row we need to print value of each column
        for(int j = 0; j<3; j++){
            cout<<brr[j][i] <<" ";
        }
        cout<<endl;
    } 
    */

   //Taking input from user
   int row = 3;
   int col = 3; 
   int arr[3][3];
//    cout<<"enter no of row: "<<endl;
//    cin>>row;
//    cout<<"Enter no of column: "<<endl;
//    cin>>col;

   //taking input row- wise
   cout<<"Entering input row- wise"<<endl;
   for(int i = 0; i< row; i++ ){
    for(int j = 0 ; j< col; j++){
        cin>>arr[i][j];
    }
   }

   cout<<"Printing row-wise"<<endl;
   for(int i = 0; i< row; i++ ){
    for(int j = 0 ; j< col; j++){
        cout<<arr[j][i]<<" ";
    }
    cout<<endl;
   }
    return 0;
}