#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int key)
{
    int st=0,end=n-1;
    while(st<=end)
    {
        int mid=(st+end)/2;
        if(arr[mid]==key)
        { cout<<"element found at index ";
            return mid;
        }else if(arr[mid]<key)
        {
            st=mid+1;
        }else{
            end=mid-1;
        }

    }
    cout<<"element not found";
    return -1;
}
int main()
{
    int arr[]={1,2,4,6,7,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int), key=14;
  cout<<  bsearch(arr,n,key);
  return 0;

}