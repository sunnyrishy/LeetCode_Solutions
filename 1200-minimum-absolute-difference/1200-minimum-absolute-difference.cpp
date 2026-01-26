class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int i = 0;
        int j = 1;
        int n = arr.size();
        int min_diff = INT_MAX;
        for(int i = 0; i < n-1; i++){
            min_diff = min(min_diff, abs(arr[i] - arr[i+1]));
        }
        while(j < n){
            if(abs(arr[i] - arr[j]) == min_diff){
                ans.push_back({arr[i], arr[j]});
            }
            i++;
            j++;
        }
        return ans;
    }
};