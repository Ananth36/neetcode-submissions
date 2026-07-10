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
        ListNode* ans = new ListNode();
        ListNode* res = ans;
        while(1){
            int mins = -1;
            for(int i = 0;i<lists.size();i++){
                if(!lists[i]){
                    continue;
                }
                if(mins == -1||lists[i]->val<lists[mins]->val){
                    mins = i;
                }
            }
            if(mins == -1){
                break;
            }
            res->next = new ListNode(lists[mins]->val);
            res = res->next;
            lists[mins] = lists[mins]->next;
        }
        return ans->next;
    }
};
