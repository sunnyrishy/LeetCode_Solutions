class Solution {
public:
    int digit_sum(int num){
        int sum = 0;
        while(num > 0){
            int l = num % 10;
            sum +=l;
            num /= 10;
        }
        return sum;
    }

    int addDigits(int num) {
        if(num < 10) return num;
        while(num >= 10){
            num = digit_sum(num);
        }
        return num;
        
    }
};