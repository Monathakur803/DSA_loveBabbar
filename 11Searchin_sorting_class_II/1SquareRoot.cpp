// find square root using binary search
#include <iostream>
using namespace std;
int findSqrt(int n)
{
    int target = n;
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (mid * mid == target)
            return mid;

        if (mid * mid > target)
        {
            // left search
            end = mid - 1;
        }
        else
        {
            // store answer &b search right
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start)/2;  // update mid
    }
    return ans;
}
int main()
{
    int n;
    cout << "Ener the number " << endl;
    cin >> n;

    int ans = findSqrt(n);
    cout << "Suare root is : " << ans << endl;

    return 0;
}