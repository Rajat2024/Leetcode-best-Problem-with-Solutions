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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)
            return head;
            
        ListNode* temp;
        temp=head;
        head=head->next;
        temp->next=head->next;
        head->next=temp;
            
        head->next->next=swapPairs(head->next->next);
        return head;
    }
};