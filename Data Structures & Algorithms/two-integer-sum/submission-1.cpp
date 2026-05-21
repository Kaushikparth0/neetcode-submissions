class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sizeNums=nums.size();
        unordered_map<int,int> numsToIndex;
        for(int i = 0; i<sizeNums; i++)
        {
            if(numsToIndex.find(target-nums[i]) != numsToIndex.end())
                return {numsToIndex[target-nums[i]],i};
            else
                numsToIndex[nums[i]]=i;
        }
        return {};

        
    }
};
