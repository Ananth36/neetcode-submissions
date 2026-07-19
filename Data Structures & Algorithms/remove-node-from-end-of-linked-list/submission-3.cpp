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
        int l = 0;
        ListNode* ct = head;
        while(ct){l++;ct = ct->next;}

        int t = l-n+1;

        if(t == 1){
            return head->next;
        }

        ListNode* ptr = head;
        int c = 1;
        while(ptr){
            if(c == t-1){
                if(ptr->next)ptr->next = ptr->next->next;
                else ptr->next = nullptr;
                break;
            }
            ptr = ptr->next;
            c++;
        }
        return head;
        
    }
};
