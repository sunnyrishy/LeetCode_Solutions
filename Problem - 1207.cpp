Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Problem Link : https://leetcode.com/problems/unique-number-of-occurrences/


class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m; //store values and occurances
        int n=arr.size();
        for(int i=0;i<n;i++) {
            if(m.find(arr[i])==m.end())
                m[arr[i]]=1;
            else
                m[arr[i]]++;

        }
        map<int,int>b; //checking for unique occurances
        for(auto i : m){
            if(b.find(i.second)==b.end())
                b[i.second]=1;
            else
                return false;
        }
        return true;
        
    }
};
