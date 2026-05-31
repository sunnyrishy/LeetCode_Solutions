class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n = asteroids.size();
        long long total_mass = mass;
        sort(asteroids.begin(), asteroids.end());
        for(int i = 0; i < n; i++){
            if(asteroids[i] > total_mass){
                return false;
            }
            else{
                total_mass += asteroids[i];
            }
        }
        return true;
    }
};