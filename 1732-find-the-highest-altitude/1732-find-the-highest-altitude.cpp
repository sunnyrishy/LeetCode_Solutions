class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_al = 0;
        int curr_al = 0;
        for(int i = 0; i < gain.size(); i++){
            curr_al = curr_al + gain[i];
            max_al = max(max_al, curr_al);
        }
        return max_al;
        
    }
};