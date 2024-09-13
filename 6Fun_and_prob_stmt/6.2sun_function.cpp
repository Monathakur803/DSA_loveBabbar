#include <iostream>
using namespace std;
int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}
int main()
{
    int a, b;
    cout << "Enter the value of A and B" << endl;
    cin >> a >> b;
    // int addition = sum(a,b);
    // cout<<"Addition of A and B is : "<<addition<<endl;
    cout << "Addition of A and B is : " << sum(a, b);
} // namespace std;
