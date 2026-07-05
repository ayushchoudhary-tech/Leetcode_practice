//rotate image-2022-leetcode
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int matrix[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3,m=3;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        { swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<m;i++)
    {
        reverse(matrix[i],matrix[i]+m);

    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        { cout<<matrix[i][j]<<" ";
        }cout<<endl;
    }

  
    return 0;
}