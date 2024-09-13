#include<iostream>
using namespace std;
int main(){
    int val;
    cout<<"enter the value: ";
    cin>>val;
    switch(val){
        // case 1: cout<<"Mona";
        // break;
        // case 2: cout<<"Thakur";
        // break;
        // case 3: cout<<"Pooja";
        // break;
        // case 4: cout<<"Sharma";
        // break;

        case 1: cout<<"Mona";
        break;
        case 2: cout<<"Thakur";
        //continue;   we can't use continue in switch case as it is only aplicable in loop
        case 3: cout<<"Pooja";
        
        case 4: cout<<"Sharma";
        
        default : cout<<"Hrikesh";

    }
}