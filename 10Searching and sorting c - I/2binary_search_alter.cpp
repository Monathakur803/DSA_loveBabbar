 
// Binary search
// Here we will use pre-defined binry_search() function

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    //searching in vector   
    vector<int> v{1,2,3,4,5,6};
    if(binary_search(v.begin(), v.end(), 3)){
        cout<<"Found "<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
     

    // searchhing in array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    if (binary_search(arr, arr + size, 5))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "element not found" << endl;
    }

    return 0;
}