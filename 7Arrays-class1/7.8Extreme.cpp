// Print extreme in array eg i/p = {1,2,3,4,5,6,7,8}
//                      then o/p = {1,8,2,7,3,6,4,5}

#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while (true)
    {
        /* code */
        if (start > end)
            break;

        if (start == end)
        {
            //when size is odd
            cout << arr[start] << " ";
        }
        else
        {
            //when size is even
            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++;
        end--;
    }

    return 0;
}
