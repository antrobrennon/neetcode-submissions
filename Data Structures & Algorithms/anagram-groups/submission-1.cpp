class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string,vector<string>> mp;
        for(string st : strs){
            string cp = st;
            sort(cp.begin(),cp.end());
            mp[cp].push_back(st);
        }

        for(auto& entry : mp){
            vec.push_back(entry.second);
        }
        return vec;
    }
};
