class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Edge cases
        if (!list1) return list2;
        if (!list2) return list1;
        
        // Dummy node to simplify head handling
        ListNode dummy(0);
        ListNode* tail = &dummy;
        
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                tail->next = list1;  // Link existing node
                list1 = list1->next;
            } else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next; // Move tail forward
        }
        
        // Attach remaining nodes
        tail->next = list1 ? list1 : list2;
        
        return dummy.next;
    }
};