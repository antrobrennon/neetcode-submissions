class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>result;
        result.push_back(-1);
        int currentMax = -1;
        for(int i = arr.size()-1 ;i > 0 ; i--){
            if(arr[i] > currentMax){
                currentMax = arr[i];
            }
            result.push_back(currentMax);
        }
        
        for(int i = result.size()-1 ; i >= 0 ; i--){
            arr[result.size()-1-i] = result[i];
        }
        
        return arr;
    }
};