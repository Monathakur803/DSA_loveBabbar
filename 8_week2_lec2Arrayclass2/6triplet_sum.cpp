//sum of 3w pair of 1-D array

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,20,30,40,50,60,70};
    int sum = 80;
    //Printing all pairs

    //this outer loop will triverse for each elements
    for(int i = 0; i< arr.size(); i++)
    {
        //current element is at 10 then it will pair with every element using inner loop then same with 20 , 30 and every element.
        int ele1 = arr[i];

        //this inner loop will traverse next element for every elements,
        for(int j = i+1; j<arr.size(); j++)
        {
            int ele2 = arr[j];
            for(int k = j+1; k<arr.size(); k++)
            {
                int ele3 = arr[k];
                if (ele1+ ele2+ ele3 == sum){
                    cout<<"we got the triplet pair( "<<ele1<<","<<ele2<<","<<ele3<<" )"<<endl;
                }
            }
        }
    }
    return 0;
}