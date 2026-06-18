class Solution {
public:
    double angleClock(int hour, int minutes) {
        double min_hand = minutes * 6;
        double hr_hand = hour * 30;
        hr_hand += minutes/2.0;
        double angle = abs(min_hand - hr_hand);
        return min(angle, 360-angle);
    }
};