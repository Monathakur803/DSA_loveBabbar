//linear search
#include <iostream>
using namespace std;
// bool linear_Search(int arr[], int size, int key)
// {
//     //Linear serach
//     for(int i = 0; i< size; i++){
//         if(arr[i] == key){
//             //if key persent in array
//             return true;
//         }
//     }
//     //if key not persent in array
//     return false;
// }
// int main()
// {
//     int arr[5] = {1,3,5,7,9};
//     int size = 5;
//     cout<<"Enter the key to find: ";
//     int key;
//     cin>>key;
//     if(linear_Search(arr, size, key)){
//         cout<<"Found "<<endl;
//     }
//     else{
//         cout<<"Not found "<<endl;
//     }
// return 0;
// }

// another method
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8};
    int size = 9;
    int key = 98;
    bool flag = 0;

    // linear search
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // cout << "Found" << endl;
            // if found
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}