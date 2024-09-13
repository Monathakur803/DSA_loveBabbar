#include <iostream>
using namespace std;
int main()
{
    bool a = true;
    bool b = true;
    bool c = false;
    bool d = false;
    cout << "AND 1 1 : " << (a & b) << endl;
    cout << "AND 1 0 : " << (a & c) << endl;
    cout << "AND 0 1 : " << (c & a) << endl;
    cout << "AND 0 0 : " << (c & b) << endl;
    cout << "AND 5&10 : " << (5 & 10) << endl;
    cout << "AND 2&3:   " << (2 & 3) << endl;

    cout << "OR 1 1: " << (a | b) << endl;
    cout << "OR 1 0: " << (b | c) << endl;
    cout << "OR 0 1: " << (c | a) << endl;
    cout << "OR 0 0: " << (c | d) << endl;
    cout << "OR 5|10: " << (5 | 10) << endl;
    cout << "OR 2|3 : " << (2 | 3) << endl;

    cout << "NOT of true " << ~(~a) << endl;
    cout << "NOT of false " << (~c) << endl;
    cout << "NOT of 5 " << (~5) << endl;
    cout << "NOT of 3 " << ~(~3) << endl;

    cout << "XOR 1 1: " << (a ^ b) << endl;
    cout << "XOR 1 0: " << (a ^ c) << endl;
    cout << "XOR 0 1: " << (c ^ b) << endl;
    cout << "XOR 0 0: " << (c ^ d) << endl;
    cout << "XOR 5^3: " << (5 ^ 3) << endl;
    cout << endl;

    int x = 12;
    int y = -287;
    y = y >> 1;
    x = x << 1;
    cout << "left shift : " << x << endl;
    cout << "Right shift: " << y << endl;
}