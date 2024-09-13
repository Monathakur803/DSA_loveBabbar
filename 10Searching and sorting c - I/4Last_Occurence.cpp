//Find the last occurence of an element
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstOccurence(vector<int> arr, int target) {
    int s = 0;
    int e =arr.size() - 1;

    int mid = s+(e-s)/2;
    int ans = -1;  // yaha p ans = -1 isliye hai q ki agar target value available hi na ho to -1 return krega

     while (s <= e){
        if (arr[mid] == target){
            //store ans then search left
            ans = mid;  // yaha store kr diya
            s = mid+1; // yaha hum left me chle gye
        }
        else if(target > arr[mid]){
            //agar ye condition true hoti hai to RIGHT me search
            s = mid+1; // lo aagye right me
        }
        else if(target < arr[mid]){
            // fir se left me search
            e = mid-1;
        }
        mid = s+(e-s) / 2;
     }
     return ans;
}
int main()
{
    vector<int> arr{1,3,3,3,4,4,4,4,6,7,8,8,8,8,8,8,8,9,11};
    int target = 4;

    int indexOfFirstOccurence = firstOccurence(arr, target);

    cout<< " Last index of "<<target<<" is "<<indexOfFirstOccurence<<endl;


    // using upper_bound also we can find last occurence
    auto ans = upper_bound(arr.begin(), arr.end(), target);
    cout<< " Last index of "<<target<<" is "<<indexOfFirstOccurence<<endl;
    return 0;
}