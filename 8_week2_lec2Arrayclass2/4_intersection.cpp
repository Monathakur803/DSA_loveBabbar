// Intersection of 1-d array

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>arr{1, 2, 3, 4, 5, 6, 7};
    vector<int>brr{3, 4, 32, 12, 1};
    vector<int> ans;

    // outer loop for arr vector
    for (int i = 0; i < arr.size(); i++)
    {
        int ele = arr[i];

        // for every above element run loop on brr vector
        for (int j = 0; j < brr.size(); j++)
        {
            if (ele == brr[j])
            {
                // mark so that repeated eement could not match again
                brr[j] = -1; // we can use brake; or INT_MIN(when all elements are +ve) or INT_MAX(When all elements are -ve)
                ans.push_back(ele);
            }
        }
    }
    for (auto value : ans)
    {
        cout << value << " ";
    }
    return 0;
}