#include<iostream>
using namespace std;
int main ()
{
    int n=15;
    for(int i=2;i<=15;i++)
    {
        int curr=i;
        bool isprime=true;
        for(int j=2;j*j<=i;j++)
        {
            if(curr%j==0)
            {
                isprime=false;
            }
        }
        if(isprime){
            cout<<curr<<",";
        }
    }
    return 0;
}