class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>count;
        int ans=0,l=0,maxL=0;
        for(int i=0;i<s.size();i++){
            count[s[i]]++;
            maxL=max(maxL,count[s[i]]);

            while((i-l+1)-maxL >k){
                count[s[l]]--;
                l++;
            }
            ans=max(ans,i-l+1);
        }
        return ans;
    }
};
