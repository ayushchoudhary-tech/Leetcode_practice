#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    int size=7;
    int MaxSum=INT_MIN;
    int CurrentSum=0;

    for(int i=0;i<size;i++)
    {  CurrentSum+=arr[i];
        MaxSum=max(CurrentSum,MaxSum);
        if(CurrentSum<0)
        {
            CurrentSum=0;
        }
    }

     cout<<"maximum sum is = "<<MaxSum;
     return 0;
}