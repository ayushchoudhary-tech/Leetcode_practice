#include<iostream>
using namespace std;
bool StairSearch(int matrix[][4],int n,int m,int key)
{ int i=0,j=m-1;
    while(i<n && j>=0)
    {
        if(matrix[i][j]==key){
            cout<<"found at index ("<<i<<","<<j<<")";
            return true;
        }else if(matrix[i][j]>key)
        {
            j--;
        }else{
            i++;
        }
    }

}
int main()
{
    int matrix[][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int n=4,m=4,key=33;
    StairSearch(matrix,n,m,key);
    return 0;
}