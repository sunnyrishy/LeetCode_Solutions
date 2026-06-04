class Solution {
public:
    int count_digits(int num){
        string s = to_string(num);
        int n = s.size();
        return n;

    }
    int is_peak(int num){
        int peaks = 0;
        string s = to_string(num);
        int n = s.size();
        for(int i = 1; i < n-1; i++){
            int curr = s[i]-'0';
            int prev = s[i-1]-'0';
            int next = s[i+1]-'0';
            if(curr > prev && curr > next){
                peaks++;
            }
        }
        return peaks;
    }
    int is_valley(int num){
        int valleys = 0;
        string s = to_string(num);
        int n = s.size();
        for(int i = 1; i < n-1; i++){
            int curr = s[i]-'0';
            int prev = s[i-1]-'0';
            int next = s[i+1]-'0';
            if(curr < prev && curr < next){
                valleys++;
            }
        }
        return valleys;
    }
    int totalWaviness(int num1, int num2) {
        int wave = 0;
        for(int i = num1; i <= num2; i++){
            if(count_digits(i)< 3) continue;
            else{
                wave+=is_peak(i);
                wave+=is_valley(i);
            }
        }
        return wave;

    }
};