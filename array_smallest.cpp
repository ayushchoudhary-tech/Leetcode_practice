#include<iostream>
#include<climits>
using namespace std;
int main ()
{ int num[]={12,7,17,4,-1,14,4};
 int size=7;
 int smallest=INT_MAX;
 int smallestindex=-1;
 for(int i=0;i<size;i++)
 { smallest=min(num[i],smallest);
   // if (num[i]<smallest)
    smallestindex=i;
     //smallest=num[i];
 }
 cout<<smallest<<endl;
 cout<<smallestindex;
  return 0;

}