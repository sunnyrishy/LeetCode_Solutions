class Solution {
public:
    int digit_count(int val){
        int cnt = 0;
        while(val > 0){
            int l = val % 10;
            cnt++;
            val = val/10;
        }
        return cnt;
    }

    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int digits = digit_count(nums[i]);
            if(digits % 2 == 0) count++;
        }
        return count;
    }
};