class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();
        long long L = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '*'){
                if(L > 0) L--;
            }
            else if (s[i] == '#'){
                L*=2;
            }
            else if (s[i] == '%') continue;
            else L++;
        }
        if(k >= L) return '.';

        for(int i = n-1; i>= 0; i--){
            if(s[i] == '*'){
                L++;
            }
            else if (s[i] == '#'){
                L = L/2;
                k = (k>=L) ? k-L : k;
            }
            else if (s[i] == '%') {
                k = L-k-1;
            }
            else L--;
            if(L==k) return s[i];
        }
        return '.';

    }
};