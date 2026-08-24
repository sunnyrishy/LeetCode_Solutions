class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if(digits[n-1] < 9){
            digits[n-1] += 1;
            return digits;
        }
        int carry = 1;
        digits[n-1] = 0;
        int pos = n-2;
        while(carry && pos >= 0){
            if(digits[pos] < 9){
                digits[pos] += carry;
                carry = 0;
            }
            else{
                digits[pos] = 0;
            }
            pos--;
        }
        if(carry){
            digits.insert(digits.begin(), 1);
        }
        return digits;


    }
};