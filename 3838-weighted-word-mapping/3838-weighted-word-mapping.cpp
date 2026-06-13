class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        map<int, char> mpp;
        for(int i = 0; i < 26; i++){
            mpp[abs(i-25)] = char('a' + i);
        }
        string res = "";
        for(auto word : words){
            int val = 0;
            for(int i = 0; i < word.size(); i++){
                val += weights[abs(word[i] - 'a')];
            }
            val = val % 26;
            res += mpp[val];
        }
        return res;
    }
};