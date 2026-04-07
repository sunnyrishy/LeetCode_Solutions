class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int start = -1;
        int end = -1;
        vector<int> res;
        int low = 0;
        int high = nums.size()-1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                start = mid;
                end = mid;
                while((start-1) >= 0 && (nums[start - 1] == target) ){
                    start = start - 1;
                }
                while((end + 1) < n && (nums[end + 1] == target) ){
                    end = end + 1;
                }
                break;
            }
            else if (nums[mid] < target) low = mid + 1;
            else high = mid -1;
        }
        res.push_back(start);
        res.push_back(end);
        return res;
    }
};