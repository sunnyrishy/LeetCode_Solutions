class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int l = 0;
        int r = 0;
        vector<int> res;
        res.push_back(-1);
        while(l < n && r < m){
            if(nums1[l] == nums2[r]){
                if(nums1[l] != res.back()) res.push_back(nums1[l]);
                l++;
                r++;
            }
            else if (nums1[l] < nums2[r]) l++;
            else r++;
        }
        res.erase(res.begin());
        return res;
    }
};