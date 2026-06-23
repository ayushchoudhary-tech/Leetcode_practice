//2 pointer approach
#include<iostream>
using namespace std;
void reverseArray(int arr[],int size)
{int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int main()
{
    int arr[]={23,4,21,43,24,53};
    int size=6;
    reverseArray(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}