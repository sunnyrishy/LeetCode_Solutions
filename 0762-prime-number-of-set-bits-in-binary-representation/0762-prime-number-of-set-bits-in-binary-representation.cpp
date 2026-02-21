class Solution {
public:
    bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    // Check for divisors from 2 up to the square root of n
    for (int i = 2; i * i <= n; ++i) { 
        if (n % i == 0) {
            return false; // Found a divisor, not prime
        }
    }
    return true; // No divisors found, it is prime
    }


    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left; i <= right; i++){
            string binary = bitset<32>(i).to_string();
            binary.erase(0, binary.find('1'));
            int count = 0;
            for(int j = 0; j < binary.size(); j++){
                if(binary[j] == '1') count++;
            }
            if(is_prime(count)) ans++;
        }
        return ans;
    }
};