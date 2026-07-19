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
        ListNode* Zero = nullptr;
        ListNode* First = head;

        while(First){
            ListNode* Second = First->next;
            First->next = Zero;
            Zero = First;
            First = Second;
        }
        return Zero;
    }
};
