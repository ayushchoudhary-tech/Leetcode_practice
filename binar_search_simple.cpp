#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,6,8,10,12,14,16};
    int n=8;
    int key=11;
    int st=0,end=n-1;
    while(st<=end)
    { int mid=(st+end)/2;
        if(arr[mid]==key){
            cout<<arr[mid];
            break;
        }else if(arr[mid]<key)
        {
            st=mid+1;
        }else
        {
            end=mid-1;
        }

    }
return 0;
}