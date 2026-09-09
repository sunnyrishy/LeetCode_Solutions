class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n == 1) return stones[0];
        if(n == 2) return abs(stones[0]-stones[1]);
        priority_queue<int> max_heap;
        for(int i = 0; i < n; i++){
            max_heap.push(stones[i]);
        }
        while(max_heap.size() > 1){
            int first = max_heap.top();
            max_heap.pop();
            int second = max_heap.top();
            max_heap.pop();
            if(first-second > 0){
                max_heap.push(first-second);
            }
        }
        if(max_heap.empty()) return 0;
        return max_heap.top();
    }
};