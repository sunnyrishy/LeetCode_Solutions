class Solution {
public:
    int find_sum(vector<int>&nums, int mid, int threshold){
        int total = 0;
        for(int i = 0; i < nums.size(); i++){
            total += ceil((double)nums[i]/mid);
            if(total > threshold){
                return total;
            }
        }
        return total;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = 1;
        while(low <= high){
            int mid = low + (high-low)/2;
            int val = find_sum(nums, mid, threshold);
            if(val > threshold){
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