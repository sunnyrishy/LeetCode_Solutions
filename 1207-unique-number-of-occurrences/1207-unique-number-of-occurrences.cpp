class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> v; //store occurances
        int count = 1;
        int curr = arr[0];
        for(int i = 1; i< n; i++){
            if(arr[i] == curr) count++;
            else{
                v.push_back(count);
                curr = arr[i];
                count = 1;
            }
        }
        v.push_back(count);
        sort(v.begin(), v.end());
        for(int i = 0 ; i < v.size()-1; i++){
            if(v[i] == v[i+1]) return false;
        }
        return true;

    }
};