class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end());
        int end=accumulate(weights.begin(),weights.end(),0);

        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            int ship=1;
            int count=0;
            for(int w:weights){
                if(count+w > mid){
                    ship+=1;
                    count=0;
                }
                count+=w;
            }
            if(ship<=days){
                ans=mid;
                end=mid-1;
            }else start=mid+1;
        }
        return ans;
    }
};