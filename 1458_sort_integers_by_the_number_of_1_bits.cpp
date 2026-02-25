class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> ones;
        for(int i = 0; i < n; i++){
            string binary = bitset<32>(arr[i]).to_string();
            binary.erase(0, binary.find('1'));
            int count = 0;
            for(int j = 0; j < binary.size(); j++){
                if(binary[j] == '1') count++;
            }
            ones.push_back({count, arr[i]});
        }
        sort(ones.begin(), ones.end());
        for(int i = 0; i < n; i++){
            arr[i] = ones[i].second;
        }
        return arr;
    }
};