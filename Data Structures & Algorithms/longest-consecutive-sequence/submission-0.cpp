class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int longest=0;
        for(int n:s){
            if(!s.count(n-1)){
                int current=n;
                int length=1;
                while(s.count(current+1)){
                    current++;
                    length++;
                }
                longest=max(longest,length);
            }
        }
        return longest;
    }
};
