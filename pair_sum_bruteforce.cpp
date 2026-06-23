#include<iostream>
#include<vector>// Time Complexity--->O(0)
using namespace std;
vector<int> pairSum(vector<int>nums,int size,int target)
{vector<int>ans;
     for(int i=0;i<size;i++)
    {for(int j=i+1;j<size;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
 
    }


}
int main()
{
    vector <int> nums={2,7,11,15};
    int  target=9;
    int n=4;
    vector<int>ans=pairSum(nums,n,target);
    cout<<ans[0]<<" , "<<ans[1]; 
    
     return 0;
}