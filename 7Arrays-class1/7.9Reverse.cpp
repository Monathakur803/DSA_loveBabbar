// Reverse an array eg i/p = {1,2,3,4,5,6,7,8}
//                then o/p = {8,7,6,5,4,3,2,1}

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        /* code */
        // step1 swap start with end index
        swap(arr[start], arr[end]);
        // step 2 : increse start
        start++;
        // step 3 dectese end index
        end--;
    }
    // printing reverse array
    cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";

    return 0;
}
