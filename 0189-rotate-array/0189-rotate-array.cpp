class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k % n;
        reverse(arr.begin()+n-k-1, arr.begin()+n);  //second portion
        reverse(arr.begin(), arr.begin()+n-k-1);  //first portion
        reverse(arr.begin(), arr.begin()+n-1);  //whole portion
    }
};