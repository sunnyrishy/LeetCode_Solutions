class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int count = 0;
        vector<int> last_seen = {-1,-1,-1};
        for(int i = 0; i < n; i++){
            last_seen[s[i]-'a'] = i;
            if(last_seen[0] != -1 && last_seen[1] != -1 && last_seen[2] != -1){
                count += 1 + min(last_seen[0], min(last_seen[1], last_seen[2]));
            }
        }
        return count;
    }
};