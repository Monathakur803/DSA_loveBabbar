// sort element of 1-D arrray of 0's and 1's

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{0,1,0,1,1,0,1,0,1,1};
    int start = 0;
    int end  = arr.size() - 1;
    int  i = 0;
    while (i != end)
    {
        if(arr[i] == 0){
            swap(arr[start],arr[i]);
            i++;
            start++;
        }
        else{
            swap(arr[i], arr[end]);
            end--;
        }                   
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
    
    return 0;
}