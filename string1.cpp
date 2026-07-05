#include<iostream>
using namespace std;
int main()
{
 char work1[]="hello";
 char work2[5]="work";
 char work3[]={'a','b','c','d','\0'};
 cout<<work1<<endl;
 cout<<work2<<endl;
 cout<<work3<<endl;
 cout<<sizeof(work1);
 cout<<strlen(work2);


return 0;
}