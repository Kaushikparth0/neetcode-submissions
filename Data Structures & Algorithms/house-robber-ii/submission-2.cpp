class Solution {
public:
    int first(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()-1) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+first(i+2,nums,dp),first(i+1,nums,dp));
    }
    int second(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+second(i+2,nums,dp),second(i+1,nums,dp));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>dp1(nums.size()+1,-1);
        vector<int>dp(nums.size()+1,-1);
        return max(first(0,nums,dp),second(1,nums,dp1));
    }
};
