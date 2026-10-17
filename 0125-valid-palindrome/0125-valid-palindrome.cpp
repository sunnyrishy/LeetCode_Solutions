class Solution {
public:
    bool isPalindrome(string s) {
        //most optimal
        //using two pointers
        //here the problem is to check from left to right and right to left so use two pointers
        int left = 0;
        int right = s.size()-1;
        while(left < right){
            while(left < right && !isalnum(s[left])) left++;
            while(left < right && !isalnum(s[right])) right--;
            if(tolower(s[left]) != tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
        
    }
};