#include<iostream>
using namespace std;
bool twiceArray(int arr[],int size)
{ for(int i=0;i<size;i++)
    {
       for(int j=i+1;j<size;j++)
       {
        if(arr[i]==arr[j])
        {
            return true;
        }
       }     
    }
    return false;

}
int main()
{
    int arr[]={1,2,1,2,3,4};
    int size=sizeof(arr)/sizeof(int);
    cout<<twiceArray(arr,size);

return 0;
}