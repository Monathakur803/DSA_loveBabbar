//sum of digits

#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "n = ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        cout << i << endl;
    }
    cout << endl
         << "sum is: " << sum;
}