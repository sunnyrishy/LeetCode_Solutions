class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //min heap to store points with min dist to origin.
        priority_queue<pair<int, int>> pq;
        vector<vector<int>> res;
        int n = points.size();
        for(int i = 0; i < n; i++){
            long long x = points[i][0] * points[i][0];
            long long y = points[i][1] * points[i][1];
            pq.push({x+y, i});
            if(pq.size() > k) pq.pop();
        }
        while(!pq.empty()){
            int idx= pq.top().second;
            res.push_back(points[idx]);
            pq.pop();
        }
        return res;
    }
};