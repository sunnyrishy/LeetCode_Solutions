class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            pq.push(nums[i]);
        }
        int idx = 1;
        while(!pq.empty()){
            if(idx == k) return pq.top();
            idx++;
            pq.pop();
        }
        return -1;
    }
};