168. Excel Sheet Column Title


Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
 

Constraints:

1 <= columnNumber <= 231 - 1

  Problem : https://leetcode.com/problems/excel-sheet-column-title/


class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n > 0){
            n--;
            int d = n%26;  //d is the remainder
            n/=26;
            ans += 'A'+d;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
