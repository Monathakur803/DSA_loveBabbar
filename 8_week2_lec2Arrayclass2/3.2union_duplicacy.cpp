//union of 2 array withhout duplicacy

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5;

    int brr[] = {1, 2, 3, 4, 6, 8};
    int sizeb = 6;

    vector<int> ans;

    // push all the elements of vector arr
    for (int i = 0; i < sizea; i++)
    {
        
        //ans.push_back(arr[i]);
        if(arr[i] != INT_MIN){
            ans.push_back(arr[i]);
        }
    }

    // push all elements of vector brr
    for (int i = 0; i < sizeb; i++)
    {
        if(brr[i] != INT_MIN){
            ans.push_back(brr[i]);
        }
    }

    // print ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}