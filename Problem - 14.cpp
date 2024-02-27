https://leetcode.com/problems/longest-common-prefix/submissions/1187808010/

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 

Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters



Solution : Using Two Pointers !


  class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n == 0) return "";

        sort(begin(strs), end(strs));

        string a = strs[0];
        string b = strs[n-1];
        string answer = "";

        for(int i = 0;i<a.size();i++){
            if(a[i] == b[i]){
                answer += a[i];
            }
            else {
                break;
            }
        }
        return answer;
    }
};

