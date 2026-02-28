class Solution {
public:
    int concatenatedBinary(int n) {
        long long mod = 1e9 + 7;
        long long result = 0;
        int length = 0;

        for (int i = 1; i <= n; i++) {
            // if i is power of 2, increase bit length
            if ((i & (i - 1)) == 0) {
                length++;
            }

            result = ((result << length) + i) % mod;
        }

        return result;
    }
};