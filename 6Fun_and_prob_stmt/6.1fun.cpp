#include <iostream>
using namespace std;
// function decleration
/*
void printName(){
        int n;
        cout<<"Enter the value of n: ";
        cin>>n;
        for(int i =0; i<n;i++){
            cout<<"Mona"<<endl ;
        }
    }
*/
void printSum(int num1, int num2)
{
    int c;
    c = num1 + num2;
    cout << c << endl;
    // cout<<num;
}
int main()
{
    /*
    //calling function
    printName();// when it call funtion it will directly go to line number 4
    */
    int a = 4;
    int b = 4;
    printSum(a, b);
    // cout<<"Address of a is : "<< &a << endl;

    // printNum(a);
}