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
    int len(ListNode*hed){
        int count=0;
        while(hed!=NULL){
            count++;
            hed=hed->next;
            
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*tmp=head,*prev=NULL;
        int n=len(head);
        if(n==1) return NULL;
      //  cout<<n;
        int cnt=-1;
        while(tmp!=NULL){
            cnt++;
            if(cnt==n/2){
                ListNode*temp=tmp;
                prev->next=tmp->next;
                delete temp;
                break;
            }
            prev=tmp;
            tmp=tmp->next;
        }
        return head;
    }
};