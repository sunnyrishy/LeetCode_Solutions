class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                clean += tolower(s[i]);
            }
        }
        string rev = clean;
        reverse(rev.begin(), rev.end());
        if(clean == rev) return true;
        return false;
    }
};