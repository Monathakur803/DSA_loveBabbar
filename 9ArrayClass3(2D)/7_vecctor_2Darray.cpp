//2D array using vector

#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<vector<int> > arr;
    // vector<int> a{1, 2, 3};
    // vector<int> b{4, 5, 6,7};
    // vector<int> c{7, 8, 9};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for(int i = 0; i< arr.size(); i++){
    //     for(int j = 0; j<arr[0].size(); j++){ //we can use 0 or i in arr[i].size()
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    int row = 5;
    int col = 5;
    vector<vector<int> > arr(row, vector<int>(col, -8));  
    for (int i = 0;i<arr.size(); i++){  
        cout<<arr[i].size()<<endl;
        for(int j = 0; j<arr[i].size(); j ++){
            cout<<arr[i][j]<<" ";
        }
        cout<<arr[2][5];
        cout<<endl;
    }
    
    return 0;
}