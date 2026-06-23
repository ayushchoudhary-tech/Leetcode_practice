#include<iostream>
using namespace std;
int binToDecimal(int BinNum)
{
    int ans=0, pow=1;
    while(BinNum>0)
    {
        int r=BinNum%10;
        BinNum=BinNum/10;
        ans+=(r*pow);
        pow*=2;
    }
    return ans; 
}
int main (){
    int n=1010;
    cout<<binToDecimal(n);
    return 0;
}