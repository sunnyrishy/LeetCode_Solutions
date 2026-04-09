class Solution {
public:
    int is_possible(vector<int>& piles, int h, int mid){
        long long val = 0;
        for(int i = 0;  i< piles.size(); i++){
            val += ceil((double)piles[i]/(double)mid);
            if(val > h) return val;
        }
        return (int)val;
        
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        long long ans = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            int hours = is_possible(piles, h, mid);
            if(hours <= h){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return (int)ans;
    }
};