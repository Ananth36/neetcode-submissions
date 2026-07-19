class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode* res = new ListNode(0);
       ListNode* ptr = res;
       while(list1 && list2){
        if(list1->val<list2->val){
            ptr->next = list1;
            list1 = list1->next;
            ptr = ptr->next;
        }
        else{
            ptr->next = list2;
            list2 = list2->next;
            ptr = ptr->next;
        }
       }
       if(list1){
        while(list1){
            ptr->next = list1;
            list1 = list1->next;
            ptr = ptr->next;
        }
       }
       else{
        while(list2){
            ptr->next = list2;
            list2 = list2->next;
            ptr = ptr->next;
        }
       }
       return res->next;

    }
};