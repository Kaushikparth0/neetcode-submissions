class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string ans="",first=strs[0],last=strs[n-1];
        for(int i=0;i<first.size();i++){
            if(first[i]==last[i]) ans+=first[i];
            else break;
        }
        return ans;
    }
};