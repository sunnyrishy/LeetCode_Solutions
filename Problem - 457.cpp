https://leetcode.com/problems/circular-array-loop/description/


You are playing a game involving a circular array of non-zero integers nums. Each nums[i] denotes the number of indices forward/backward you must move if you are located at index i:

If nums[i] is positive, move nums[i] steps forward, and
If nums[i] is negative, move nums[i] steps backward.
Since the array is circular, you may assume that moving forward from the last element puts you on the first element, and moving backwards from the first element puts you on the last element.

A cycle in the array consists of a sequence of indices seq of length k where:

Following the movement rules above results in the repeating index sequence seq[0] -> seq[1] -> ... -> seq[k - 1] -> seq[0] -> ...
Every nums[seq[j]] is either all positive or all negative.
k > 1
Return true if there is a cycle in nums, or false otherwise.






  Solution : 



class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0){
                continue;  //skippint element as it is visited.
            }

            int slow = i;
            int fast = getNextIndex(nums, i);

            while(nums[slow] * nums[fast] > 0 && nums[slow] * nums[getNextIndex(nums, fast)] >0) {
                if(slow == fast){
                    if(slow != getNextIndex(nums, slow)){
                        return true;
                    }
                    break;
                }

                slow = getNextIndex(nums, slow);
                fast = getNextIndex(nums, getNextIndex(nums, fast));
            }
                int j = i;
                while (nums[j] * nums[getNextIndex(nums, j)] > 0) {
                int nextIndex = getNextIndex(nums, j);
                nums[j] = 0;
                j = nextIndex;
                }

            

        }

        return false;


    }    

    int getNextIndex(vector<int>& nums, int i) {
        int n = nums.size();
        return ((i + nums[i]) % n + n) % n;
    }
};
