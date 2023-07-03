462. Minimum Moves to Equal Array Elements II

Given an integer array nums of size n, return the minimum number of moves required to make all array elements equal.

In one move, you can increment or decrement an element of the array by 1.

Test cases are designed so that the answer will fit in a 32-bit integer.


  Example 1:

Input: nums = [1,2,3]
Output: 2
Explanation:
Only two moves are needed (remember each move increments or decrements one element):
[1,2,3]  =>  [2,2,3]  =>  [2,2,2]
Example 2:

Input: nums = [1,10,2,9]
Output: 16
 

Constraints:

n == nums.length
1 <= nums.length <= 105
-109 <= nums[i] <= 109




  Code : 

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());         //sort the given array
        int n = nums.size();
        if(n%1 || n==1) {                              //if array length is odd  and holds for single lenght array
            int k = nums[n/2];
            int total = 0;
            for(int i=0;i<n;i++){
                total+= abs(k - nums[i]);        //finding the absolute difference
                
            }
            return total;
        }
        else {
            int k = nums[n/2];
            int m = nums[(n/2)-1];
            int total1 = 0;
            int total2 = 0;
            for(int i=0;i<n;i++) {
                total1+= abs(k - nums[i]);
                total2+= abs(m - nums[i]);

            }
            return min(total1, total2);
        }
    }
};
