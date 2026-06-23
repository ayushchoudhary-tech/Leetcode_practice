#include<iostream>
#include<climits>
using namespace std;
void maxprofit(int price[],int n)
{ int BestBuy[100000],Profit[n];int maxprofit=INT_MIN;
    BestBuy[0]=INT_MAX;
    for(int i=1;i<n;i++)
    {
        BestBuy[i]=min(price[i-1],BestBuy[i-1]);
      //cout<<BestBuy[i];
        Profit[i]=BestBuy[i]-price[i];
        maxprofit=max(Profit[i],maxprofit);
    }
    cout<<maxprofit;
}
int main()
{ int price[]={7,1,5,3,6,4};
 int n=sizeof(price)/sizeof(int);
  maxprofit(price,n);
return 0;
    
}