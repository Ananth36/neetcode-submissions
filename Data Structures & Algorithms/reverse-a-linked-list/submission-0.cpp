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
        if (!head){return nullptr;}
        ListNode* zero = head;
        ListNode* minusone = nullptr;
        ListNode* first = head->next;

        while(first!=nullptr){
            zero->next = minusone;
            minusone = zero;
            zero = first;
            first = first->next;
        }
        zero->next = minusone;
        head = zero;
        return head;
    }
};
