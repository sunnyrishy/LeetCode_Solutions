class Solution {
public:
    void helper(int val, vector<int>& res){
        vector<int> temp;
        for(int i = 1; i*i <= val; i++){
            if(val%i == 0){
                if(i != val/i){
                    temp.push_back(i);
                    temp.push_back(val/i);
                    if(temp.size() > 4) break;
                }
                else temp.push_back(i);
                if(temp.size() > 4) break;
            }
        }
        if(temp.size() == 4){
            for(int j = 0; j < temp.size(); j++){
                res.push_back(temp[j]);
            }
        }
    }

    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> res;
        for(int i = 0; i < n; i++){
            helper(nums[i], res);
        }

        for(int i = 0; i < res.size(); i++) ans += res[i];
        return ans;
    }
};