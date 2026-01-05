class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sec = 0;
        vector<int> first = points[0];
        int x1 = first[0];
        int y1 = first[1];
        points.erase(points.begin());
        while(points.size() != 0){
            vector<int> second = points[0];
            points.erase(points.begin());
            int x2 = second[0];
            int y2 = second[1];
            sec += max(abs(y2-y1), abs(x2-x1));
            x1 = x2;
            y1 = y2;
        }
        return sec;
        
    }
};