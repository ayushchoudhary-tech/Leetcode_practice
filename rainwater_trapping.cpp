#include<iostream>
#include<climits>
using namespace std;
void rainwater(int height[],int n)
{  int lftMax[20000];lftMax[0]=height[0];
    int RghtMax[20000];RghtMax[n-1]=height[n-1];
    for(int i=1;i<n;i++)
    {
        lftMax[i]=max(lftMax[i-1],height[i-1]);
      
    }
    for(int i=n-2;i>=0;i--)
    { RghtMax[i]=max(RghtMax[i+1],height[i+1]);
    }int watertrapped=0;
    for(int i=0;i<n;i++)
    {
        int currwater=min(lftMax[i],RghtMax[i])-height[i];
        if(currwater>0)
        {
            watertrapped+=currwater; }
    }
    cout<<"total water trapped is"<< watertrapped;


}

int main()
{
    int height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
 rainwater(height,n);
 return 0;
}