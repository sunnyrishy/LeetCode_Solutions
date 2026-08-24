class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        //using sorting and find common elements
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int l = 0;
        int r = 0;
        vector<int> res;
        while(l < n && r < m){
            if(nums1[l] == nums2[r]){
                res.push_back(nums1[l]);
                l++;
                r++;
            }
            else if (nums1[l] < nums2[r]) l++;
            else r++;
        }
        return res;
    }
};