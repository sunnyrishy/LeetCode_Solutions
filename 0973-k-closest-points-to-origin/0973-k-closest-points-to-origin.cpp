class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        int n = points.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < n; i++){
            long long x = points[i][0] * points[i][0];
            long long y = points[i][1] * points[i][1];
            pq.push({x+y, i});
        }
        for(int i = 0; i < k; i++){
            int idx = pq.top().second;
            ans.push_back(points[idx]);
            pq.pop();
        }
        return ans;

    }
};