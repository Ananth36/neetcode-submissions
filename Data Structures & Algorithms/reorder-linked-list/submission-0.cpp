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

        while(head && head->next){
            ListNode* p0 = head->next;
            ListNode* p1 = p0->next;
            while(p1){
                int t = p0->val;
                p0->val = (int)p1->val;
                p1->val = (int)t;
                p1=p1->next;
            }
            head = p0->next;
        }    
    }
};
