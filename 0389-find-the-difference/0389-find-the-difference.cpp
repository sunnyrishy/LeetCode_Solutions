class Solution {
public:
    char findTheDifference(string s, string t) {
        //using bit manipulation with XOR
        char ans = 0;
        for(char c : s){
            ans ^= c;
        }
        for(char c : t){
            ans ^= c;
        }
        return ans;
        
    }
};