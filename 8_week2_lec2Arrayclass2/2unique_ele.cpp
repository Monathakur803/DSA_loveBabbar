// find unique element

#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cout << "Entre the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements : " << endl;
    // taking input
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int uniqueEle = findUnique(arr);
    cout << "Unique element is : " << uniqueEle << endl;

    return 0;
}