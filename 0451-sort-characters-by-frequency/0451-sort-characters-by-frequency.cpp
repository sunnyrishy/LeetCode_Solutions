class Solution {
public:
    string frequencySort(string s) {
        string res = "";
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
        }
        vector<pair<int, char>> v;
        for(const auto& [c,f] : mpp){
            v.push_back({f,c});
        }
        sort(v.begin(), v.end(), [](const pair<int, char>& a, const pair<int, char>& b){return a > b;});
        for(const auto& [f, c] : v){
            res.append(f, c);
        }
        return res;
    }
};