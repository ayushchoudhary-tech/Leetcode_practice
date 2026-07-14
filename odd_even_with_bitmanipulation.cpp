#include<iostream>
using namespace std;
int main()
{    int n=123;
    int bitmask=1;
    if((n&bitmask)==0)
    {
        cout<<"the number is even ";

    }else {
        cout<<"the number is odd";
    }
    return 0;
}
