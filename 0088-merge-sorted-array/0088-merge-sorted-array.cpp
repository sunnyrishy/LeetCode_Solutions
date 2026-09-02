class Solution {
public:

// doing this in reverse order
//always deal with the current largest element and push it to the corner of nums1 vector.
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m-1;
        int j = n-1;
        int k = n+m-1;
        while(i>= 0 && j >= 0){
            if(nums2[j] > nums1[i]){
                nums1[k] = nums2[j];
                j--;
            }
            else{
                nums1[k] = nums1[i];
                i--;
            }
            k--;
        }
        while(j>= 0){
            nums1[k] = nums2[j];
            k--;
            j--;
        }
        return;
    }
};

// try some test cases like 
// nums1 = [1,2,3,0,0,0], m = 3
// nums2 = [4,5,6], n = 3

// Expected:
// [1,2,3,4,5,6]
