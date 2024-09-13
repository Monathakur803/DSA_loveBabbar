//Student grade uding switch case
#include<iostream>
using namespace std;
//using switch case 
char grade(int marks){
    switch (marks/10){
        case 10 : return 'A';
        break;// Well!! When you are using return then no need to use break keyword 
        case 9 : return 'A';
        break;
        case 8 : return 'B';
        break;
        case 7 : return 'C';
        break;
        case 6 : return 'D';
        break;
        case 5 : return 'E';
        break;
        case 4 : return 'F';
        break;
        default : return 'X';
    }
}
// char grade(int marks){
//     if(marks>=90){
//         return 'A';
//     }
//     else if(marks>=80){
//         return 'B';
//     }
//     else if(marks>=70){
//         return 'C';
//     }
//     else if(marks>=60){
//         return 'C';
//     }
//     else if(marks>=50){
//         return 'D';
//     }
//     else if(marks>=40){
//         return 'E';
//     }
//     else {
//         return 'F';
//     }
// }
int main(){
    // int marks;
    // cout<<"Enter your marks bacche!! "<<endl;
    // cin>>marks;
    // cout<<"Your grade is : "<<grade(marks);
    //All grade from 1 to 100
    for(int i = 0 ; i <= 100; i++){
        char ans = grade(i);
        cout<<"Grade for marks "<<i<<" : " <<ans<<endl;
    }
}