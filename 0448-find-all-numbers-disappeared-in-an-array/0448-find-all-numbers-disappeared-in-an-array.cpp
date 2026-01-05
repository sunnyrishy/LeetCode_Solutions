class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> st;
        vector<int> missing;
        for(int x : nums){
            st.insert(x);
        }

        for(int i = 1; i <= n;i++){
            if(st.find(i) == st.end()){
                missing.push_back(i);
            }
        }
        return missing;
        
    }
};