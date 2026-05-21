class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0,end=heights.size()-1,maxWater=0;
        while(start<=end)
        {
            int width=end-start;
            int high=min(heights[start],heights[end]);
            int area=width*high;
            maxWater=max(maxWater,area);
            if(heights[start]<heights[end]){
                start++;
            }else{
                end--;
            }
        }
        return maxWater;
        
    }
};
