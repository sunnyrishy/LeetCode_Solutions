class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        vector<int> lower(26, -1);
        vector<int> upper(26, -1);
        for(int i = 0; i < n; i++){
            char c = word[i];
            if(islower(c)){
                lower[c-'a'] = i;
            }
            else{
                if(upper[c-'A'] == -1){
                    upper[c-'A'] = i;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(lower[i] != -1 && upper[i] != -1){
                if(lower[i] < upper[i]) ans++;
            }
        }
        return ans;
    }
};