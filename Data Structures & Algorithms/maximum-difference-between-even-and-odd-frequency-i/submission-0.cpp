class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>freq;
        for(char c:s){
            freq[c]++;
        }
        int maxOdd=1,minEven=s.size();
        for(auto f:freq){
            if(f.second %2 ==1) maxOdd=max(maxOdd,f.second);
            else minEven=min(minEven,f.second);
        }
        return maxOdd-minEven;
    }
};