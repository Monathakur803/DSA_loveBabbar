 
// Binary search
// Here we will use pre-defined binry_search() function

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// int binarySearch(int arr[], int size, int target)
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = (start + end) / 2; // may be in feature integer overflow occur,bcz integer rannge is : -2^31 to 2^31-1
//     //  if start and end ko add krenge to range se bahar ja sakta hai issi liye isko nhi use krna hai I BAAT SAMAJH!!!!!!
//     // so we will use :
//     // int mid  = start + (end - start) / 2;

//     while (start <= end)
//     {
//         int element = arr[mid];

//         if (element == target)
//         {
//             // if target element is at index
//             return mid;
//         }
//         else if (target < element)
//         {
//             // if target elememt is less than mid value
//             end = mid - 1; // search left side
//         }
//         else
//         {
//             // if target element is greater than mid value
//             // search in right side
//             start = mid + 1;
//         }
//         mid = (start + end) / 2; // or mid  = start+ (end - start)/2;
//     }
//     // element not found
//     return -1;
//}
int main()
{
    //searching in vector   
    // vector<int> v{1,2,3,4,5,6};
    // if(binary_search(v.begin(), v.end(), 3)){
    //     cout<<"Found "<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }
     
    // searchhing in array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    if (binary_search(arr, arr + size, 5))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    return 0;
}