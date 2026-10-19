class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        // uses a stack to keep track of previous days whose warmer day hasn't been found yet.
        //as we find a warmer day we update the indices accordingly.
        int n = temp.size();
        stack<int> st;
        vector<int> ans(n, 0);
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