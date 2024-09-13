#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //creating VECTOR
    vector<int> arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
    cout<<"vector size initially: "<<arr.size()<<endl;
    cout<<"vector capacity: "<<arr.capacity()<<endl;

    //insert in array
    arr.push_back(5);
    arr.push_back(6);
    //print
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;

    //remove or delete
    arr.pop_back();
    //print
    for(int i = 0; i < (arr.size()); i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;

    //another way to decleare vector
    vector<int>brr(10); //to initilize with 1, -1 or any number use  vector<int>brr(10, 1);
    cout<<brr.size()<<endl;
    cout<<brr.capacity()<<endl;
    //print
    for(int i = 0; i < (brr.size()); i++){
        cout<<brr[i] << " ";
    }
    cout<<endl;

    //initilizing by takin size from user
    int n;
    cout<<"ENter the size of n : ";
    cin>>n;
    vector<int>crr(n,3);
    cout<<crr.size()<<endl;
    cout<<crr.capacity()<<endl;
    //print
    for(int i = 0; i < (crr.size()); i++){
        cout<<crr[i] << " ";
    }
    cout<<endl;

    //other way to initilize
    vector<int>drr{10,20,30};
    for(int i = 0;  i< drr.size(); i++){
        cout<<drr[i]<<" ";
    }
    cout<<endl;
    vector<int>err;

    cout<<"Vector drr is empty or not "<<drr.empty()<<endl;
    cout<<"Vector arr is empty or not "<<err.empty()<<endl;
    
    return 0;
}