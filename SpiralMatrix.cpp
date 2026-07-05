#include<iostream>
using namespace std;
void PrintSpiralMatix(int matrix[][4], int m , int n)
{int srow=0,scol=0,erow=m-1,ecol=n-1;
    while(srow<=erow&&scol<=ecol)
    { for(int j=scol;j<=ecol;j++)
        {
            cout<<matrix[srow][j];
        }cout<<" ";
        for(int i=srow+1;i<=erow;i++)
        {
            cout<<matrix[i][ecol];
        }cout<<" ";
        for(int j=ecol-1;j>=scol;j--){
           cout<<matrix[erow][j];
        }cout<<" ";
        for(int i=erow-1;i>=srow+1;i--)
        {
            cout<<matrix[i][scol];
        }cout<<" ";

    srow++;
    scol++;
    erow--;
    ecol--;
    }

}
int main()
{
int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
 int m=4,n=4;
PrintSpiralMatix(matrix,m,n);
return 0;
}