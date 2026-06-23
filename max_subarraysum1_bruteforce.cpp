#include<iostream>
#include<climits>
using namespace std;
int main ()
{
    int n=5;
    int MaxSum=INT_MIN;
    int arr[5]={1,2,3,4,5};
    for(int st=0;st<n;st++)
    {  int  currentSum=0;
        for(int end=st;end<n;end++)
          
        {  currentSum+=arr[end];
           MaxSum=max(currentSum,MaxSum);
        }  }
    cout<<"max subarray sum = "<<MaxSum<<endl; 
    return 0;
}