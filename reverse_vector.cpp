#include<iostream>
#include<vector>
using namespace std;
void Rverse(vector<int>&num)
{ int start=0;
    int end=num.size()-1;
    while(start<end)
    {
        swap(num[start],num[end]);
        start++;
        end--;
    }

}
int main()
{
    vector<int> num={1,2,3,4,5};
   Rverse(num);
 cout<<"reversed order"<<endl;
 for(int val:num)
 { cout<<val<<" ";

 } cout<<endl;
 return 0;
}