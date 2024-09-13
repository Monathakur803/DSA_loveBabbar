// sum of n even number
#include <iostream>
using namespace std;
int sumEven(int n) // we are using integer return type b/c it will always returm integraal value
{
    int sum = 0;
    for (int i = 0; i <= n; i =i+2) //inc i++ for sum of natural number 
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Sum of even numbe till " << n << " is " << sumEven(n);
}