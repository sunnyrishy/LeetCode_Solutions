class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //sliding window
        //expand window if s[right] is not seen else reduce window until that element is removed
        int n = s.size();
        unordered_set<char> st;
        int maxi = 0;
        int left = 0;
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