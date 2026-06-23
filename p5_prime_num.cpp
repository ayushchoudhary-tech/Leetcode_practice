#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    bool isprime=true;
 
    for(int i=2;i<n-1;i++)
    { if (n % i==0)
        isprime=false;
        break;

    }
    if(isprime)
        cout<<n<<"is a prime number"<<endl;
    else
     cout<<n<<"is not a prime number";
    return 0;
}