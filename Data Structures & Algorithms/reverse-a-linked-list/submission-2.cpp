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
        ListNode* first = head;
        ListNode* zero = nullptr;
        while(first){
            ListNode* second = first->next;
            first->next = zero;
            zero = first;
            first = second;
        }
        return zero;
    }
};
