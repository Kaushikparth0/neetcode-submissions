class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size();
        unordered_map<char,int>mp;
        int l=0,r=0,minLen=INT_MAX,sInd=-1,count=0;
        for(char c:t)mp[c]++;
        while(r<m){
            if(mp[s[r]]>0){
                count++;
            }
            mp[s[r]]--;
            while(count==n){
                if((r-l+1)<minLen){
                    minLen=r-l+1;
                    sInd=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return sInd==-1 ? "" : s.substr(sInd,minLen);
    }
};
