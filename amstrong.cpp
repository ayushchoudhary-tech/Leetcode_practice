#include<iostream>
using namespace std;
int main()
{
    int n=372;
    int temp=n;
    int armstrong;
    while(temp>0)
    { int r=temp%10;
        temp=temp/10;
        armstrong+=r*r*r;

    }
    if(armstrong==n)
    {
        cout<<"the number is a armstrong ";

    }
    else{
        cout<<"the number is not a armstrong number";
    }
    return 0;

}