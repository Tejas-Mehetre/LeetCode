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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* trav = head->next;
        ListNode* temp = trav;

        while(trav != nullptr){
            int sum = 0;
            while(temp->val != 0){
                sum += temp->val;
                temp = temp->next;
            }
            trav->val = sum;
            temp = temp->next;
            trav->next = temp;
            trav = trav->next;
        }
        return head->next;
    }
};