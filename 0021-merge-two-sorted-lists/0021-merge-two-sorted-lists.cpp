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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL && list2 == NULL) return list1;
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode* head = NULL;
        if(list1->val > list2->val){
            head = list2;
            list2 = list2->next;
        }
        else{
            head = list1;
            list1 = list1->next;
        }
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* curr = head;
        while(curr1 != NULL && curr2!= NULL){
            if(curr1->val > curr2->val){
                curr->next = curr2;
                curr = curr2;
                curr2 = curr2->next;
            }
            else {
                curr->next = curr1;
                curr = curr1;
                curr1 = curr1->next;
            }

        }
        if(curr1){
            curr->next = curr1;
        }
        if(curr2){
            curr->next = curr2;
        }
        return head;
    }
};