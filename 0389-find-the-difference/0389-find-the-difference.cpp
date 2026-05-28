class Solution {
public:
    char findTheDifference(string s, string t) {
        int s_sum = 0;
        int t_sum = 0;
        for(int i = 0; i < s.size(); i++){
            s_sum += s[i] - 'a';
        }
        for(int i = 0; i < t.size(); i++){
            t_sum += t[i] - 'a';
        }
        return t_sum-s_sum + 'a';
        
    }
};