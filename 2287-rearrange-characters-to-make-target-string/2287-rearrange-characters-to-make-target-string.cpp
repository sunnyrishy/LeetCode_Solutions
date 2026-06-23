class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> t_map, s_map;

        for(char c : target) t_map[c]++;
        for(char c : s) s_map[c]++;

        int ans = INT_MAX;

        for(auto &it : t_map){
            ans = min(ans, s_map[it.first] / it.second);
        }

        return ans;
    }
};