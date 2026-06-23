#include<iostream>
using namespace std;
void uniqueElement(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        bool unique=true;
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j]){
             unique=false;
             break;}
        }
        if(unique){
        cout<<arr[i]<<" ";
    }
}
    
}
int main()
{
    int num[]={1,3,2,4,3,4,3,2,5,7,6,5,4};
    int size=sizeof(num)/sizeof(int);
    uniqueElement(num,size);
    return 0;

}