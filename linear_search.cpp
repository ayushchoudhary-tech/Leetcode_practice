#include<iostream>
using namespace std;
int linearsearch( int arr[],int size, int target)
{ 
      
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target){
        cout<<"element found at index : "<<i<<endl;
         return i;
        }  
        
    }   
       return -1;  //not found;

}
int main ()
{
    int arr[]={4,2,7,8,1,2,5};
    int target=5;
    int size=7;
   cout<<linearsearch(arr,size,target);


    return 0;
}
