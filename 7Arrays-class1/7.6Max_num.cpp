//Maximum  number
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]= {2,3,24,5,7,6,8,9,34,31,5};
    int size = 11;
    //initilize the max variable with the minimum possible integer value
    int maxi = INT_MIN;

    for(int i = 0; i<size; i++){
        if(arr[i] > maxi){
            //fount a number greater than maxi, update maxi
            maxi = arr[i]; 
        }
    }
    cout<<"Maximum number is : "<<maxi<<endl;
    return 0;
}
