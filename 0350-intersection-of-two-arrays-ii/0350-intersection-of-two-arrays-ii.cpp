class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        unordered_map<int, int> mpp1;
        unordered_map<int, int> mpp2;
        for(auto num : nums1){
            mpp1[num]++;
        }
        for(auto num : nums2){
            mpp2[num]++;
        }
        vector<int> res;
        for(auto it : mpp1){
            if(mpp2.find(it.first) != mpp2.end()){
                auto itt = mpp2.find(it.first);
                int min_times = min(it.second, itt->second);
                for(int i = 0; i < min_times; i++){
                    res.push_back(it.first);
                }
            }
        }
        return res;
    }
};