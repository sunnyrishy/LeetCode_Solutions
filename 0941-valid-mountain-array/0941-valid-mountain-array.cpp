class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
     int n = arr.size();
     if(n < 3) return false;
     if(n == 3){
        if(arr[1] > arr[0] && arr[1] > arr[2]) return true;
        return false;
     }   
     int peak = n-1;
     for(int i = 0; i < n-1; i++){
        if(arr[i] >= arr[i+1]){
            peak = i;
            break;
        }
     }
     if(peak == n-1 || peak == 0) return false;
     for(int i = peak; i < n-1; i++){
        if(arr[i] <= arr[i+1]) return false;
     }
     return true;
    }
};