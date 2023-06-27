557. Reverse Words in a String III

Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "God Ding"
Output: "doG gniD"
 

Constraints:

1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.



class Solution {
public:
    string reverseWords(string s) {
        string str = "";                      //this string stores the final reversed string
        string substring = "";                //this string is used to store the intermediate result

        for(int i=0;i<s.size();i++) {        //iterating over the given string s
            if(s[i]==' '){                   // is space is identified
                reverse(substring.begin(),substring.end());   //we reverse the string till found
                str += substring;           // the substring is added to the result string
                str += " ";                //adding space
                substring = "";              //reinitializing the substing to empty

            }
            else {
                substring += s[i];          //is space is not found i.e character is found
            }
        }
        reverse(substring.begin(),substring.end());      //this is for the last word because there won't be any space at the end
        str += substring;
        return str;

        
    }
};
