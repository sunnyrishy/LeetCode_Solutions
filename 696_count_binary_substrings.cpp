class Solution {
public:
    int countBinarySubstrings(string s) {
        //prev curr window size
        int count = 0;
        int i = 1;
        int prev = 0;
        int curr = 1;
        while(i < s.size()){
            if(s[i-1] != s[i]){
                count += min(prev, curr);
                prev = curr;
                curr = 1;
            }
            else curr++;
            i++;
        }
        count += min(prev, curr);
        return count;
    }
};