class Solution {
public:
    int cal_days(vector<int>& weights, int days, int capacity){
        int total_days = 1;
        int curr_capacity = 0;
        for(int i = 0; i < weights.size(); i++){
            if(curr_capacity + weights[i] <= capacity){
                curr_capacity += weights[i];
            }
            else{
                total_days++;
                curr_capacity = 0;
                curr_capacity = weights[i];
            }
            if(total_days > days) return total_days;
        }
        return total_days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for(int i = 0; i < n; i++){
            high += weights[i];
        }
        int ans = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            int no_days = cal_days(weights, days, mid);
            if(no_days > days){
                low = mid + 1;
            }
            else{
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
        
    }
};