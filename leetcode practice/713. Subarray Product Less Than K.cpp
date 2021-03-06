class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        
        int p=1,ans=0,l=0;
        for(int r=0;r<nums.size();r++)
        {
            p=p*nums[r];
            while(p>=k)
                p=p/nums[l++];
            ans=ans+(r-l+1);
        }
        
        return ans;
    }
};
