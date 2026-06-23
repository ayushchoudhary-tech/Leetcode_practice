#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int copy[n];
  for(int j=0;j<n;j++)
        {
            copy[j]=arr[n-1-j];
        }
     for(int i=0;i<n;i++)
     {
        arr[i]=copy[i];
     }
     for(int i=0;i<n;i++)
     {
        cout<<arr[i];
     }
    return 0;
}