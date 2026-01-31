class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target == 'z') return letters[0];
        if(target >= letters[letters.size()-1]) return letters[0];
        int low = 0;
        int high = letters.size()-1;
        char ans;
        while(low <= high){
            int mid = (low + high)/2;
            if(letters[mid] <= target) low = mid + 1;
            else if(letters[mid] > target){
                ans = letters[mid];
                high = mid - 1;
            }
        }
        
        return ans;
    }
};