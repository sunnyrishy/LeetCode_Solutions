class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //most optimal code
        //use the freq count to make a key and store the values for it.
        unordered_map<string, vector<string>> mpp;
        for(string str : strs){
            vector<int> freq(26, 0); //count the freq of char
            for(char c : str){
                freq[c-'a']++;
            }
            string key = ""; //make a key out of it. every anagram produces the same key
            for(int count : freq){
                key += to_string(count)+"#";
            }
            mpp[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto it : mpp){
            res.push_back(it.second);
        }
        return res;
        //T = O(n*k) and S = O(n*k)
        //n is number of words and k is the avg len of word
        
    }
};