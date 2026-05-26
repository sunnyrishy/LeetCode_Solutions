class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> diff(n+1, 0);
        for(auto &shift : shifts){
            int l = shift[0];
            int r = shift[1];
            int direction = shift[2];
            if(direction == 1){ //forward
                diff[l]++;
                diff[r+1]--;
            }
            else{
                diff[l]--;
                diff[r+1]++;
            }
        }
        for(int i= 1; i < diff.size(); i++){
            diff[i] += diff[i-1];
        }
        for(int i = 0; i < n; i++){
            int x = (s[i]-'a' + diff[i]) % 26;
            if(x < 0){
                x += 26;
            }
            s[i] = x + 'a';
        }
        return s;

        
    }
};