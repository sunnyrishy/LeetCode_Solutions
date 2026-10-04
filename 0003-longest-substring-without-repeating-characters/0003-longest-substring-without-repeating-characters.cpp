class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi = 0;
        int n = s.size();
        int left = 0;
        unordered_set<char> st;
        for(int right = 0; right < n; right++){
            while(st.contains(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxi = max(maxi, right-left+1);
        }
        return maxi;
    }
};