#include <iostream>
using namespace std;
int main()
{
    /*//array decleared
    int arr[7];
    char arr2[57];
    bool arr3[37];
    cout<<"Address of created array is "<< arr<<endl;
    cout<<"Address of created array is "<< &arr<<endl;
    cout<<"array created successfully"<<endl;
    */
    // //Array initilization
    // int arr[] = {2,3,1,4,5,6,3,};
    // int a[3] = {1,2,3};
    // int cr[7] = {4,2,3,5}; //size is 7 but value given only 4 it will run withot error and remaining space will be filled wit zero '0' value
    // //int br[4] = {2,3,4,5,6,7}; // Itt will generate error b/c memory space is 4 and we give vale more than 4.
    // char array[5] = {'a','c','d','e','f'};
    // cout<<"Array initilized successfully "<<endl;

    // //printing all value form array
    // int arr[] = {1,3,5,7,9};
    // for(int index = 0; index < 6; index++){
    //     cout<<arr[index]<<" ";
    // }

    // //printing value by taking i/p from  user
    // int arr[10];
    // //takinng i/p from user
    // cout<<"ENter the 10 elements for array: "<<endl;
    // for(int i = 0 ; i < 10; i++){
    //     cin>>arr[i];
    // }
    // //printing values
    // cout<<"Printing th evalue of array "<<endl;
    // for(int i = 0 ; i < 10; i++){
    //     cout<<arr[i]<<" ";
    // }

    // // Take  5 element from user in array and print there doube
    // int arr[5];
    // cout<<"Enter the elements in array: "<<endl;
    // for(int i = 0; i<5; i++){
    //     cin>>arr[i];
    // }
    // cout<<"Printing the double of entered input : "<<endl;
    // for(int i = 0; i<5; i++){
    //     cout<<2*arr[i]<<" ";
    // }

    // // enter size of array by user
    // int arr[4000];
    // int n;
    // cout<<"How mny element you wnt to add in array: "<<endl;
    // cin>>n;
    // //adding elements to array
    // cout<<"Enter the elements in array:"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Printing the elements in array:"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<2*arr[i]<<" ";
    // }

    // you have given array {1,2,3,4,5} change it to 1 1 1 1 1
    // int a[5] = {1,2,3,4,5};
    // for(int i = 0 ; i < 5 ; i++){
    //     a[i] = 1;
    // }
    // for(int i = 0 ; i < 5 ; i++){
    //     cout<<a[i]<<" ";
    // }

    //
    int arr[10] = {1, 2, 3};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}