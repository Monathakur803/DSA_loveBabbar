#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void inc(int brr[], int size)
{
    brr[0] = brr[0] + 10;

    printArr(brr, size);
}
int main()
{
    int arr[] = {5, 6};
    int size = 2;
    inc(arr, size);
    printArr(arr, size);
    return 0;
}