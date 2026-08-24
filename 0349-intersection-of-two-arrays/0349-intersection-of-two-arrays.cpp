class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        //using unordered_set
        unordered_set<int> st1;
        unordered_set<int> st2;
        vector<int> res;
        for(auto it : nums1){
            st1.insert(it);
        }
        for(auto it : nums2){
            st2.insert(it);
        }
        for(auto it : st1){
            if(st2.count(it)){
                res.push_back(it);
            }
        }
        return res;
    }
};