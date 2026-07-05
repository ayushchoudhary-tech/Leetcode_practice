#include<iostream>
using namespace std;
int  DiagonalSum(int matrix[][4],int n,int m )
{int Sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                Sum+=matrix[i][j];
            }else if(j==n-i-1)
            {
               Sum+=matrix[i][j];
            }
        }
    }
   return Sum;
    
}
int main()
{
    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4,m=4;
  cout<<  DiagonalSum(matrix,n,m);
    return 0;
}
