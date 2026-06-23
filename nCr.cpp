#include<iostream>
using namespace std;
int fact(int n)
{  int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr(int n,int r)
{
     int fact_n=fact(8);
    int fact_r=fact(2);
    int fact_nr=fact(n-r);
 return  fact_n/(fact_r*fact_nr )  ;
}


int main()
{
    int n=8,r=2;
     cout<<nCr(n,r);
     return 0;

}