//bit manipulation
#include<iostream>
using namespace std;
//get ith bit
int getIthBit(int n,int i)
{
   int  bitmask=1<<i;
   if(!(n&bitmask))
   {
    return 0;
   }else
   {
    return 1;
   }
}
// set ith bit 
int SetIthBit(int n,int i)
{  int bitmask=1<<i;
    return (n|bitmask);


}
//Clear ith bit
int ClearIthBit(int n,int i)
{ int bitmask=1<<i;
    return (n&(~bitmask));


}
//update Ith Bit
int  UpdateIthBit(int n,int i,int val)
{n=n&(~(1<<i));
    int bitmask=val<<i;
    return (n|bitmask);

}
//WAF to clear last i bits of a number
int ClearlastIBits(int n,int i){
    int bitmask=~0<<i;
    return (n&bitmask);
}
//Waf to count the set bits of a number 
int CountSetBits(int n)
{ int count=0;
    while(n>0)
    { if(n&1==1)
        {
            count++;
        }
        n=n>>1;

    }
    return count;

}
//fast exponentation 
void FastExponentation(int x,int n)
{ int ans=1;
    while(n>0)
    { int lastbit=n&1;
        if(lastbit)
        {
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    }
    cout<<ans;

}
int main()
{ /*cout<<getIthBit(6,2)<<endl;
    cout<<SetIthBit(6,3);
    cout<<ClearIthBit(6,1);
    cout<<UpdateIthBit(7,3,1);
    cout<<ClearlastIBits(15,2);
    cout<< CountSetBits(7);*/
    FastExponentation(3,5);

    return 0;
    

}