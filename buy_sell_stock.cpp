#include<iostream>
#include<climits>
using namespace std;
void maxprofit(int price[],int n)
{ int BestBuy[100000],Profit[n];int maxprofit=0;
    BestBuy[0]=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        BestBuy[i]=min(price[i-1],BestBuy[i-1]);
      
    }
    int maxProfit=0;
    for(int i=0;i<n;i++)
    {
      int CurrProfit=price[i]-BestBuy[i];
      maxProfit=max(maxProfit,CurrProfit);
    }
    cout<<maxProfit;
}
int main()
{ int price[]={7,1,5,3,6,4};
 int n=sizeof(price)/sizeof(int);
  maxprofit(price,n);
return 0;
    
}