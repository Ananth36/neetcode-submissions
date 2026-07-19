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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = new ListNode(0);
        ListNode* ittr = ans;

        while(1){
            int minnode = 0;
            int minval = INT_MAX;
            for(int i = 0;i<lists.size();i++){
                if(lists[i] && lists[i]->val<minval){
                    minval = lists[i]->val;
                    minnode = i;
                }
            }
            if(minval == INT_MAX)break;
            ittr->next = new ListNode(minval);
            ittr = ittr->next;
            lists[minnode] = lists[minnode]->next;
        }
        
        return ans->next;
    }
};
