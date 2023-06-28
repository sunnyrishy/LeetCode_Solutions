75. Sort Colors

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.


  Problem Link : https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count =0, count1 = 0, count2 = 0;       //initializing 3 count variables to 0
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 0){
                count++;
            }
            if(nums[i] == 1){
                count1++;
            }
            else {
                count2++;
            }
        }
        int i=0;            
        while(count>0)             //there while loops are executed sequentially
        {
            nums[i++]=0;
            count--;
        } 
        
        while(count1>0)
        {
            nums[i++]=1;
            count1--;
        }
        
        while(count2>0)
        {
            nums[i++]=2;
            count2--;
        }
        
    
        
    }
};
