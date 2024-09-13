// count 0's and 1's in Array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1};
    int size = 15;
    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        // if zero found , increment numZero
        if (arr[i] == 0)
        {
            numZero++;
        }
        // if zero found , increment numOne
        if (arr[i] == 1)
        {
            numOne++;
        }
    }
    cout<<"Number of zeros : "<<numZero<<endl;
    cout<<"Number od ones  : "<<numOne<<endl;

    return 0;
}