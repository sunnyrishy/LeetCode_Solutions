Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.


  Problem Link : https://leetcode.com/problems/valid-parentheses/



class Solution {
public:
    bool isValid(string s) {
        stack<char> stack; // Create a stack to store opening brackets

        // Loop through each character in the string
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                // If it's an opening bracket, push it onto the stack
                stack.push(c);
            } else if (!stack.empty() &&
                       ((c == ')' && stack.top() == '(') ||
                        (c == ']' && stack.top() == '[') ||
                        (c == '}' && stack.top() == '{'))) {
                // If it's a closing bracket that matches the top of the stack, pop the stack
                stack.pop();
            } else {
                // If it's a mismatched bracket or a closing bracket without a matching opening bracket
                return false; // The string is invalid
            }
        }

        // If all brackets are matched and the stack is empty, the string is valid
        return stack.empty();
    }
};
