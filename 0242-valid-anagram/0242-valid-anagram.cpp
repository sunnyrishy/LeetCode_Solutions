class Solution {
public:
    bool isAnagram(string s, string t) {
        //most optimal
        // we just need to check if the freq of char in both string are same or not.
        if(s.size() != t.size()) return false;
        int n = s.size();
        int m = t.size();
        vector<int> freq(26, 0);
        for(int i = 0; i < n; i++){ //O(n)
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }
        for(int i = 0; i < 26; i++){ //O(26)
            if(freq[i] != 0) return false;
        }
        return true;
        //T = O(n) and S = O(26)== O(1)
        
    }
};