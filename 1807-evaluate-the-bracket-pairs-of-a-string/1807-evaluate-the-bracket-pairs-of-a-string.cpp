class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        string ans = "";
        unordered_map<string, string>mpp;
        for(int i = 0; i < knowledge.size(); i++){
            mpp[knowledge[i][0]] = knowledge[i][1];
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                int j = i+1;
                while(s[j] != ')') j++;
                string key = s.substr(i+1, j-i-1);
                if(mpp.find(key) != mpp.end()){
                    ans += mpp[key];
                }
                else{
                    ans += "?";
                }
                i = j;
            }
            else ans += s[i];
        }
        return ans;
    }
};