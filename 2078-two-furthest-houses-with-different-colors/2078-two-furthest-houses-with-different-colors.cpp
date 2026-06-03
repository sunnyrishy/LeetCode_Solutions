class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int start = 0;
        int end = n-1;
        int from_end = -1;
        int from_start = -1;
        while(end > 0){
            if(colors[start] == colors[end]){
                end--;
            }
            else{
                from_end = end;
                break;
            }
        }
        end = n-1;
        while(start < n-1){
            if(colors[start] == colors[end]){
                start++;
            }
            else{
                from_start = end-start;
                break;
            }
        }

        return max(from_end, from_start);
        
    }
};