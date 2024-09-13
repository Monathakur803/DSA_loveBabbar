#include <iostream>
using namespace std;
void counting(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "counting till N is " << endl
             << i + 1 << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    counting(n);
}