
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return answer(head,NULL);
    }
    TreeNode* answer(ListNode* head,ListNode* tail)
    {
        if(head==tail)
            return NULL;
        if( head->next == tail )    // 
    	{	
    		TreeNode *root = new TreeNode( head->val );
    		return root;
    	}
       ListNode *temp=head,*mid=head;
        while(temp != tail && temp->next != tail)
        {
            mid=mid->next;
            temp=temp->next->next;
        }
        TreeNode *root = new TreeNode( mid->val );
        root->left=answer(head,mid);
        root->right=answer(mid->next,tail);
        return root;
    }
};