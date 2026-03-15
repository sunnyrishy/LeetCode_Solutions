class Fancy {
public:
    static const long long MOD = 1e9 + 7;
    vector<long long> arr;
    long long mul, add;

    Fancy() {
        mul = 1;
        add = 0;
    }

    long long modPow(long long a, long long b){
        long long res = 1;
        a = a % MOD;
        while(b > 0){
            if(b&1) res = (res * a) % MOD;  //if b is odd
            a = (a * a) % MOD;
            b >>= 1;
        }
        return res;
    }

    long long modInverse(long long x){
        return modPow(x, MOD-2);
        // division is not possible when modulo operation happens
        //so we did a trick to calculate the power of a number using the Fermat's theorm
    }
    
    void append(int val) {
        long long stored_val = ((val - add + MOD) % MOD * modInverse(mul)) % MOD;
        // normalizing the value
        arr.push_back(stored_val);
    }
    
    void addAll(int inc) {
        add = (add + inc) % MOD;
    }
    
    void multAll(int m) {
        mul = (mul * m) % MOD;
        add = (add * m) % MOD;
    }
    
    int getIndex(int idx) {
        if(idx >= arr.size()) return -1;
        return (arr[idx] * mul + add) % MOD;
    }
};

/**
 * Your Fancy object will be instantiated and called as such:
 * Fancy* obj = new Fancy();
 * obj->append(val);
 * obj->addAll(inc);
 * obj->multAll(m);
 * int param_4 = obj->getIndex(idx);
 */