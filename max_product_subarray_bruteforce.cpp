#include<iostream>
#include<climits>
using namespace std;
void maxsubpro(int arr[],int n)
{  int maxpro=INT_MIN;
    for(int st=0;st<n;st++)
    {int curproduct=1;
    
    
        for(int end=st;end<n;end++)
        {
        
         curproduct*=arr[end];
            cout<<curproduct<<" ";
            maxpro=max(maxpro,curproduct);
        }
        cout<<endl;
    }
    cout<<"max product : "<<maxpro;
    
}

int main()
{
    int arr[]={2,3,-2,4,-12};
    int n=sizeof(arr)/sizeof(int);
    maxsubpro(arr,n);
    return 0;

}
