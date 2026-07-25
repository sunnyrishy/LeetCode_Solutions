class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n>0){
            int last = n % 10;
            arr.push_back(last);
            n = n/10;
        }
        sort(arr.begin(), arr.end());
        int m = arr.size();
        return arr[m-1]*arr[m-2];
    }
};