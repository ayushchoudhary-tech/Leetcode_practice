#include<iostream>
using namespace std;
void Search(int martix[][4],int n,int m,int key)
{ for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(martix[i][j]==key)
            {
                cout<<i<<","<<j;
                break;
            }
        }
    }

}




int main()
{
    int matrix[][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n=4,m=4,key=33;
    Search(matrix,n,m,key);
    return 0;
}