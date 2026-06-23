#include<iostream>
using namespace std;
int main ()
{
    int n=5;
    int first=0;
    int second=1;
    for(int i=0;i<5;i++)
    {int third=first+second;
        cout<<third;
        first=second;
        second=third;
        
    }
    return 0;
}