class Solution {
public:
    int maxArea(vector<int>& heights) {
        int total = heights.size()-1;
        int left = 0, right = total;
        int maxWater = 0;

        while(left < right) {
            int mini = min (heights[left], heights[right]);
            int area = mini * (right-left);

            maxWater = max(maxWater, area);

            if(heights[left] == mini) left++;
            else right--;

            // total--;
        }  
        return maxWater;  
    }
};
