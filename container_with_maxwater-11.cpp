//container with maximum water 

class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=height.size();
        int lft=0,rgt=n-1;
      int   MWater=0;
        while(lft<rgt)
        {
            int w=rgt-lft;
            int h=min(height[lft],height[rgt]);
            int CurrentWater=w*h;
            MWater=max(MWater,CurrentWater);
            height[lft]<height[rgt]?lft++:rgt--;
        }
        return MWater;
    }
};