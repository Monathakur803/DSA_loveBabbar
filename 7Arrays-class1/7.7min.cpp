//Minimum number in array
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]= {2,3,24,5,7,6,8,9,34,31,5};
    int size = 11;
    //initilize the min variable with the minimum possible integer value
    int mini = INT_MAX;

    for(int i = 0; i<size; i++){
        if(arr[i] < mini){
            //fount a number greater than maxi, update maxi
            mini = arr[i]; 
        }
    }
    cout<<"Minimum number is : "<<mini<<endl;
    return 0;
}
