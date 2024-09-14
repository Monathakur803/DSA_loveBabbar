// find square root with decimal value using binary search
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

    int precision;
    cout<<"Enter number of floating digit in precision: "<<endl;
    cin>>precision;

    double step = 0.1;
    double finalAns = ans;

    for ( int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j*j <= n; j = j+step)
        {
            finalAns = j;
        }
        step = step/10;
    }
    cout<<"Final answer is : "<<finalAns<<endl;

    return 0;
}