class Solution {
public:
    int how_many_bloom(vector<int>& bloomDay, int m, int k, int day){
        int bouq = 0;
        int count = 0;
        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= day){
                count++;
                if(count == k){
                    bouq++;
                    count = 0;
                }
            }
            else count = 0;
            
            if(bouq >= m) return bouq;
        }
        return bouq;

    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k > (long long)n) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = high;
        while(low <= high){
            int mid = low + (high-low)/2;
            int bouq = how_many_bloom(bloomDay, m, k, mid);
            if(bouq >= m){
                ans = mid;
                high = mid -1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};