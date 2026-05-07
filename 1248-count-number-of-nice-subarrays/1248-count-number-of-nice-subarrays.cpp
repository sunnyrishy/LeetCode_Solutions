class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 1){
                nums[i] = 1;
            }
            else nums[i] = 0;
        }
        int count = 0;
        int prefix_sum = 0;
        map<int, int> mpp; //sum, index
        mpp[0]++;
        for(int i = 0; i < n; i++){
            prefix_sum += nums[i];
            int find = prefix_sum - k;
            if(mpp.find(find) != mpp.end()){
                count+= mpp[find];
            }
            mpp[prefix_sum]++;
        }
        return count;
    }
};