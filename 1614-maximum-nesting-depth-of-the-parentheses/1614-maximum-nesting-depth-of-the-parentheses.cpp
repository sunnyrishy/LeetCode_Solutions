class Solution {
public:
    int maxDepth(string s) {
        int maxi = 0;
        int n = s.size();
        int counter = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                counter++;
                maxi = max(maxi, counter);
            }
            else if (s[i] == ')'){
                counter--;
            }
        }
        return maxi;
    }
};