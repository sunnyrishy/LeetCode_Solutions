class Solution {
public:
    unordered_map<string, vector<char>> mp;
    unordered_map<string, bool> memo;

    bool dfs(string bottom) {
        // Base case
        if (bottom.size() == 1)
            return true;

        // If already computed
        if (memo.count(bottom))
            return memo[bottom];

        vector<string> nextRows;
        string current = "";

        buildNextRows(bottom, 0, current, nextRows);

        for (string &row : nextRows) {
            if (dfs(row))
                return memo[bottom] = true;
        }

        return memo[bottom] = false;
    }

    void buildNextRows(string &bottom, int idx,
                       string &current, vector<string> &nextRows) {

        if (idx == bottom.size() - 1) {
            nextRows.push_back(current);
            return;
        }

        string key = bottom.substr(idx, 2);
        if (!mp.count(key))
            return;

        for (char ch : mp[key]) {
            current.push_back(ch);
            buildNextRows(bottom, idx + 1, current, nextRows);
            current.pop_back(); // backtrack
        }
    }

    bool pyramidTransition(string bottom, vector<string>& allowed) {
        for (string &s : allowed) {
            mp[s.substr(0, 2)].push_back(s[2]);
        }
        return dfs(bottom);
    }
};