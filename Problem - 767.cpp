767. Reorganize String


Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

Return any possible rearrangement of s or return "" if not possible.

 

Example 1:

Input: s = "aab"
Output: "aba"
Example 2:

Input: s = "aaab"
Output: ""
 

Constraints:

1 <= s.length <= 500
s consists of lowercase English letters.

  Problem : https://leetcode.com/problems/reorganize-string/description/


class Solution {
public:
    string reorganizeString(string S) {
        int cnts[26] = {};
        for (char c : S) cnts[c - 'a']++;

        // Find the most frequent character
        int maxIndex = 0;
        for (int i = 0; i < 26; i++) {
            if (cnts[i] > cnts[maxIndex]) {
                maxIndex = i;
            }
        }

        // If the most frequent character count exceeds half the length + 1, rearrangement is not possible
        if (cnts[maxIndex] > (S.length() + 1) / 2) {
            return "";
        }

        string ans(S.length(), ' ');
        int idx = 0;

        // Fill even indices with the most frequent character
        while (cnts[maxIndex] > 0) {
            ans[idx] = char(maxIndex + 'a');
            idx += 2;
            cnts[maxIndex]--;
        }

        // Fill other indices with remaining characters
        for (int i = 0; i < 26; i++) {
            while (cnts[i] > 0) {
                if (idx >= S.length()) {
                    idx = 1;
                }
                ans[idx] = char(i + 'a');
                idx += 2;
                cnts[i]--;
            }
        }

        return ans;
    }
};
