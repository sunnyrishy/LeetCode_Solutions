class Solution {
public:
    int smallestNumber(int n, int t) {
        if(n <= t) return t;
        int curr = n;
        int copy = curr;
        int prod = 1;
        while(curr > 0){
            while(copy > 0){
                int l = copy % 10;
                if(l == 0) return curr;
                prod = prod * l;
                copy = copy / 10;
            }
            if(prod % t == 0){
                return curr;
            }
            else{
                curr++;
                copy = curr;
                prod = 1;
            }
        }
        return -1;

    }
};