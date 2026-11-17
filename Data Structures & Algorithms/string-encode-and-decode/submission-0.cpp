class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(string st : strs){
            string var = to_string(st.length()) + "#";
            s.append(var);
            s.append(st);
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int num = 0, i = 0; 
        while(i < s.length()){
            num = 0;
            string st = "";
            while(isdigit(s[i])){
                num = num*10 +s[i] - '0';
                i++;
            }
            i++;
            
            while(num--){
                st += s[i];
                i++;
            }
            ans.push_back(st);
        }
        return ans;
    }
};
