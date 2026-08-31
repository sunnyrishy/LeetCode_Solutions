class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        int l = 0;
        int r = n-1;
        int i = n-1;
        while(l<=r){
            int maxi = max(abs(nums[l]), abs(nums[r]));
            if(maxi == abs(nums[l])) l++;
            else r--;
            res[i] = maxi*maxi;
            i--;
        }
        return res;

        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     nums[i] = nums[i]*nums[i];
        // }
        // sort(nums.begin(), nums.end());
        // return nums;
    }
};