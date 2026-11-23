class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_element = INT_MIN;
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] > max_element){
                max_element = candies[i];
            }
        }
        vector<bool> res(candies.size(), false);
        for(int i = 0; i < candies.size(); i++){
            if(candies[i] + extraCandies >= max_element){
                res[i] = true;
            }
        }
        return res;
    }
};