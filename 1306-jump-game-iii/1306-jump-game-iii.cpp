class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(arr[start] == 0) return true;
        int n = arr.size();
        queue<int> q;
        set<int> st;
        q.push(start);
        while(!q.empty()){
            int curr = arr[q.front()];
            if(curr == 0) return true;
            int right = q.front() + curr;
            int left = q.front() - curr;
            if(right <= n-1 && st.find(right) == st.end()) q.push(right);
            if(left >= 0 && st.find(left) == st.end()) q.push(left);
            st.insert(q.front());
            q.pop();
        }
        return false;
    }
};