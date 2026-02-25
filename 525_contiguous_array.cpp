class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp; //sum and its index for the first time occurance
        int ans = 0;
        int sum = 0;
        //if 0 we do -1 if 1 we do + 1;
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                sum -= 1;
            }
            else sum += 1;
            if(sum == 0) ans = i+1;
            else{
                if(mpp.find(sum) != mpp.end()){
                    ans = max(ans, i-mpp[sum]);
                }
                else mpp[sum] = i;
            }
        }
        return ans;
    }
};