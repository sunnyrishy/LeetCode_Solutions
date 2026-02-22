class Solution {
public:
    string maximumXor(string s, string t) {
        string new_t;
        int zero = 0;
        int one = 0;
        for(int i = 0; i < t.size(); i++){
            if(t[i] == '0') zero++;
            else one++;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                if(one > 0){
                    new_t += '1';
                    one--;
                }
                else{
                    new_t += '0';
                    zero--;
                }
            }
            else{
                if(zero > 0){
                    new_t += '0';
                    zero--;
                }
                else{
                     new_t += '1';
                    one--;
                }
            }
        }
        string res;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1' || new_t[i] == '1'){
                if(s[i] == '1' && new_t[i] == '1') res += '0';
                else res+= '1';
            }
            else res += '0';
        }
        return res;
    }
};