class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int p1 = 0;
        int p2 = 0;
        while(p1 < word1.size() && p2 < word2.size()){
            res += word1[p1];
            res += word2[p2];
            p1++;
            p2++;
        }
        while(p1 < word1.size()){
            res += word1[p1];
            p1++;
        }
        while(p2 < word2.size()){
            res += word2[p2];
            p2++;
        }
        return res;
    }
};