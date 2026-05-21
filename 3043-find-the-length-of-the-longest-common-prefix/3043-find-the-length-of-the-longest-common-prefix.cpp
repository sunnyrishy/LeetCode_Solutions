class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        set<string> st;
        for(int i = 0; i < n; i++){
            string s = to_string(arr1[i]);
            for(int j = 1; j <= s.size(); j++){
                string t = s.substr(0, j);
                st.insert(t);
            }
        }
        int max_len = 0;
        for(int j = 0; j < m; j++){
            string p = to_string(arr2[j]);
            for(int k = 1; k <= p.size(); k++){
                string v = p.substr(0, k);
                if(st.find(v) != st.end()){
                    max_len = max(max_len, k);
                }
                else{
                    break;
                }
            }
        }
        return max_len;
        
    }
};