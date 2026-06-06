class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,sum=0;
        int minS=INT_MAX;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            while(sum>=target){
                minS=min(minS,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        if(minS==INT_MAX) return 0;
        return minS;
    }
};