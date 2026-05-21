class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid;
        int ans=nums.size();
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                start=mid+1;
            else{
                ans=mid;
                end=mid-1;
            }
        }
        return ans;

    }
};