class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size()-1;;
        int maxWater = 0;

        while(left < right) {
            int mini = min (heights[left], heights[right]);

            maxWater = max(maxWater, mini * (right-left));

            while(left < right && heights[left] <= mini) ++left;
            while(left < right && heights[right] <= mini) --right;
        }  
        return maxWater;  
    }
};
