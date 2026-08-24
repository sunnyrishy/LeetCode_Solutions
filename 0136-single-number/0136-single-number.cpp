class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //method 1 using unordered_map
        int n = nums.size();
        // unordered_map<int, int> mpp;
        // for(int i = 0; i < n; i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it : mpp){
        //     if(it.second != 2){
        //         return it.first;
        //     }
        // }
        // return -1;
        //method 2 using XOR operations
        int xorr = 0;
        for(int i = 0; i < n; i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};