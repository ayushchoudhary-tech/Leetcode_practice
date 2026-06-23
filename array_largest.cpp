#include<iostream>
#include<climits>
using namespace std;
int main ()
{
    int num[]={12,3,54,65,34,66,2};
    int largest=INT_MIN;
    int size =7;
    int largestindex=-1;
    for(int i=0;i<size;i++)
    {
        if(num[i]>largest)
        {
            largest=num[i];
            largestindex=i;
        }
    }
    cout<<largest<<endl;
    cout<<largestindex;



 return 0;
}