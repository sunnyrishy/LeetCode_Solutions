459. Repeated Substring Pattern

Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

Example 1:

Input: s = "abab"
Output: true
Explanation: It is the substring "ab" twice.
Example 2:

Input: s = "aba"
Output: false
Example 3:

Input: s = "abcabcabcabc"
Output: true
Explanation: It is the substring "abc" four times or the substring "abcabc" twice.


  Problem : https://leetcode.com/problems/repeated-substring-pattern/

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for(int len = 1; len <= n/2; len++){
            if(n%len == 0){
                string substring = s.substr(0, len);
                string newstr;

                for(int i = 0; i < n/len; i++){
                    newstr += substring;
                }
                if(newstr == s){
                    return true;
                }
            }
        }
        return false;
    }
    
};
