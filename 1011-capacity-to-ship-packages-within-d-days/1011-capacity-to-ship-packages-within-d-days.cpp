class Solution {
public:
    int cal_days(vector<int>&weights, int cap){
        int days = 1;
        int total_weight = 0;
        for(int i = 0; i < weights.size(); i++){
            if(total_weight + weights[i] > cap){
                days++;
                total_weight = weights[i];
            }
            else{
                total_weight += weights[i];
            }
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            int days_req = cal_days(weights, mid);
            if(days_req > days){
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