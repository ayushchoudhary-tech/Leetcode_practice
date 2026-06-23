//to calculate sum & product off all numbers in an array 
#include<iostream>
using namespace std;
int sumOfArray(int arr[],int size)
{ int sum=0;
    for(int i=0;i<size;i++)
     { sum+=arr[i];

     }
return sum;
}
int productOfArray(int arr[],int size)
{
    int product=1;
    for(int i=0;i<size;i++)
    {
        product*=arr[i];
    }

    return product;
}
int main ()
{
    int arr[]={2,3,4,5,6,7};
   int size = 6;
   cout<<sumOfArray(arr,size)<<endl;
   cout<<productOfArray(arr,size);
   return 0;

}