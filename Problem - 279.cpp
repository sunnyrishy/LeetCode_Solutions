279. Perfect Squares

Given an integer n, return the least number of perfect square numbers that sum to n.

A perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself. For example, 1, 4, 9, and 16 are perfect squares while 3 and 11 are not.

 

Example 1:

Input: n = 12
Output: 3
Explanation: 12 = 4 + 4 + 4.
Example 2:

Input: n = 13
Output: 2
Explanation: 13 = 4 + 9.



  Using Greedy Approach ->

  class Solution {
public:
    int numSquares(int n) {
        vector<int>a(n+1,n);       //creating a vector of size n+1 and assigning evert value to be n
        a[0] = 0;                  //the first vale of set to 0 because it is for '0'
        a[1] = 1;

        for(int i=2;i<=n;i++){       //outer for loop, looping over 2 to n
            for(int j=1;j*j<=i;j++) {   //inner for loop, looping over 1 to square root of i to find all the sqaures between the range
                a[i] = min(a[i],a[i-j*j] +1);   //min possibilities
            }

        }
        return a[n];
    }
};
