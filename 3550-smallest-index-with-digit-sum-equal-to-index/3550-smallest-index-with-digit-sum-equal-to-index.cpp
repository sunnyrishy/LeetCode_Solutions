class Solution {
public:
    int cal_dig_sum(int val){
        int sum = 0;
        while(val > 0){
            int l = val%10;
            sum += l;
            val = val/10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int digit_sum = cal_dig_sum(nums[i]);
            if(digit_sum == i) return i;
        }
        return -1;
    }
};