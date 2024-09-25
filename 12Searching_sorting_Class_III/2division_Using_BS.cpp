// Divide 2 numbers using binary search

#include <iostream>
using namespace std;
int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend); // abs() is absolute function se to take absolute value , it remove sign nad always gives +ve value
    int ans = 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // when perfectly divisible means erfect solution
        if (abs(mid * divisor) == abs(dividend))
        {
            ans =  mid;
            break;
        }
        // when not perfect
        if (abs(mid * divisor) > abs(dividend))
        {
            // Left search
            e = mid - 1;
        }
        else
        {
            // store answer
            ans = mid;
            // then do right search
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return ans;
    }
    else{
        return -ans;
    }
}
int main()
{
    int dividend = 22;
    int divisor = 7;

    int ans = solve(dividend, divisor);
    cout<< "Answer is : " << ans << endl;
    
    int precision;
    cout<<"Enter number of floating digit in precision: "<<endl;
    cin>>precision;

    double step = 0.1;
    double finalAns = ans;

    for ( int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j*divisor <= dividend; j = j+step)
        {
            finalAns = j;
        }
        step = step/10;
    }
    cout<<"Final answer is : "<<finalAns<<endl;

    return 0;
}
