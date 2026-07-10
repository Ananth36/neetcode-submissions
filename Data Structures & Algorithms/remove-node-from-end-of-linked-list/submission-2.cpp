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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int l  = 0;
        ListNode* hc = head;
        while(hc){
            l++;
            hc= hc->next;
        }

        hc = head;
        for(int i = 0;i<l-n-1;i++){
            hc = hc->next;
        }
        if(l-n-1 == -1){
            head = head->next;
            return head;
        }

        hc->next = hc->next->next;
        return head;
        
    }
};
