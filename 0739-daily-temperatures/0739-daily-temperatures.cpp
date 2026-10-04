class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && temp[i] > temp[st.top()]){
                int curr = st.top();
                st.pop();
                ans[curr] = i-curr;
            }
            st.push(i);
        }
        return ans;
    }
};