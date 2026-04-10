class Solution {
public:
    int calculate_value(vector<int>& nums, int threshold, int mid){
        int val = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            val += ceil((double)nums[i]/(double)mid);
            if(val > threshold) return val;
        }
        return val;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            int res = calculate_value(nums, threshold, mid);
            if(res > threshold){
                low = mid + 1;
            }
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};