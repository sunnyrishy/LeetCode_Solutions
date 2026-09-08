class Solution {
public:
    int countCommas(int n) {
        int no_digits = 0;
        int n_copy = n;
        while(n_copy > 0){
            no_digits++;
            n_copy = n_copy/10;
        }
        if(no_digits < 4) return 0;
        if(no_digits < 7) return (1*(n-999));
        return -1;
        
    }
};