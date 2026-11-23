class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        if(m == 1){
            if(flowerbed[0] == 0 && n == 1 )return true;
            if(flowerbed[0] == 1 && n == 0) return true;
            if(flowerbed[0] == 0 && n == 0) return true;
            return false;
        }
        int can = 0;
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            can++; 
        }

        for(int i = 1; i < flowerbed.size()-1; i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0){
                flowerbed[i] = 1;
                can++;
            }
        }
        if(flowerbed[m-2] == 0 && flowerbed[m-1] == 0){
            flowerbed[m-1] = 1;
            can++;
        }
        if(can >= n) return true;
        return false;
    }
};