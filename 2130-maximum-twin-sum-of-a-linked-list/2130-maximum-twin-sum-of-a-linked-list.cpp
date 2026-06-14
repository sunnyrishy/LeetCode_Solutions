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
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow ->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow;
        ListNode* prev = NULL;
        while(temp){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        long long maxi = head->val;
        while(head!= NULL && prev != NULL){
            long long sum = head->val + prev->val;
            maxi = max(maxi, sum);
            head = head->next;
            prev = prev->next;
        }
        return (int)maxi;
        
    }
};