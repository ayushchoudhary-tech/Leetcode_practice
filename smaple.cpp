#include<iostream>
using namespace std;
int main()
{
    int n=-123;
    int reverse=0;
    int sign=(n<0)?-1:1;
    int num=(n<0)?-n:n;
    while(num>0)
    {
        reverse=(reverse*10)+num%10;
        num=num/10;
    }
 cout<<reverse*sign;
 return 0;



}