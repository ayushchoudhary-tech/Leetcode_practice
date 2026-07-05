#include<iostream>
using namespace std;
int CountNo(int matrix[][3],int n,int m,int element)
{ int freq=0;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        if(matrix[i][j]==element)
        {
            freq++;
        }
    }
  }
  return freq;
}
int main()
{
    int matrix[][3]={{4,7,8},{8,8,7}};
    int n=sizeof(matrix)/sizeof(matrix[0]);
    int m=sizeof(matrix[0])/sizeof(matrix[0][0]);
    int element=7;
  cout<<  CountNo(matrix,n,m,element);
    return 0;
}