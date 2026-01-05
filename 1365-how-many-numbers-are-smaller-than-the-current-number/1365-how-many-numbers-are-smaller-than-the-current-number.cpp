class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;
        vector<int> prefix(101, 0);
        for(int x : nums){
            prefix[x]++;
        }
        for(int i = 1; i <= 100; i++){
            prefix[i]+= prefix[i-1];
        }
        for(int x : nums){
            if(x == 0){
                res.push_back(0);
            }
            else res.push_back(prefix[x-1]);
        }
        return res;
        
    }
};