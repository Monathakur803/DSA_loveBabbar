//Binary search in nearly sorted array 

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s  + (e - s) / 2;
    while (s <= e)
    {
        if(arr[mid] == target){
            return mid;
        }
        if(mid - 1 >= s && arr[mid-1] == target){ // left of mid should be greater then starting index
            return mid - 1;
        }
        if(mid = < e &&arr[mid + 1] == target){  // right o mid sholid be less then the end index
            return mid + 1;
        }

        if(arr[mid] > target){
            e =  mid - 2;
        }
        else {
            s = mid + 1;
        }

        mid = s  + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{18,3,40,28,58,80,70};
    int target = 70;

    int ans = binarySearch(arr,target);
    if (ans == -1){
        cout<<"Traget element not found"<<endl;
    }
    else{
    cout<<"Target element found"<<endl;
    cout<<"Index of target element "<<target<<" is : "<<ans<<endl;
    }
    return 0;

    
    
} 
