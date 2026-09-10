/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> arr;
        ListNode* curr = head;
        while(curr){
            int data = curr->val;
            arr.push_back(data);
            curr = curr->next;
        }   
        curr = head;
        for(int i = arr.size()-1; i >=0; i--){
            curr->val = arr[i];
            curr = curr->next;
        }
        return head;
    }
};