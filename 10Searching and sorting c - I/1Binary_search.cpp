
// Binary search
#include <iostream> 
using namespace std;
int binary_search(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // may be in feature integer overflow occur,bcz integer rannge is : -2^31 to 2^31-1
    //  if start and end ko add krenge to range se bahar ja sakta hai issi liye isko nhi use krna hai I BAAT SAMAJH!!!!!!
    // so we will use :
    // int mid  = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            // if target element is at index
            return mid;
        }
        else if (target < element)
        {
            // if target elememt is less than mid value
            end = mid - 1; // search left side
        }
        else
        {
            // if target element is greater than mid value
            // search in right side
            start = mid + 1;
        }
        mid = (start + end) / 2; // or mid  = start+ (end - start)/2;
    }
    // element not found
    return -1;
}
int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 12;
    int indexOfTarget = binary_search(arr, size, target);

    if (indexOfTarget == -1)
    {
        cout << "Target element not found!!!" << endl;
    }
    else
    {
        cout << "Target found at index " << indexOfTarget << endl;
    }
    return 0;
}