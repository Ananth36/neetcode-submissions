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
        ListNode* res = new ListNode();
        ListNode* rescp = res;
        vector<int> nums;
        for(ListNode* l: lists){
            while(l){
                nums.push_back(l->val);
                l = l->next;
            }
        }
        if(nums.size() == 0){
            return nullptr;
        }
        sort(nums.begin(),nums.end());

        res->val = nums[0];
        for(int i = 1;i<nums.size();i++){
            res->next = new ListNode(nums[i]);
            res = res->next;
        }
        return rescp;
    }
};
