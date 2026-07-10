class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> mpp;
        for(char c : text){
            if(c == 'b' || c == 'a' || c == 'l' || c == 'o' || c == 'n'){
                mpp[c]++;
            }
        }
        if(mpp.size() < 5 || mpp['l'] < 2 || mpp['o'] < 2) return 0;
        int ans = INT_MAX;
        for(auto it : mpp){
            if(it.first == 'l' || it.first == 'o'){
                mpp[it.first] = it.second/2;
            }
        }
        for(auto it : mpp){
            ans = min(ans, it.second);
        }
        return ans;
        
    }
};