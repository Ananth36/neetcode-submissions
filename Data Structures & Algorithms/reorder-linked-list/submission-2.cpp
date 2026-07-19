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
    void reorderList(ListNode* head) {
        if(!head->next)return;
        ListNode* ptr1 = head->next;
        ListNode* ptr2 = ptr1->next;
        while(ptr1 && ptr1->next){
            ptr2 = ptr1->next;
            while(ptr2){
            int temp = ptr1->val;
            ptr1->val = ptr2->val;
            ptr2->val = temp;
            ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next->next;
        }   
    }
};
