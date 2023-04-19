/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
        //l == go_left
        
        int ans=0;
        void rec(TreeNode* root,bool l,int steps)
        {
                if(!root)
                        return;
                ans=max(ans,steps);
                if(l)
                {
                        rec(root->left,0,steps+1);
                        rec(root->right,1,1);
                }
                else
                {
                        rec(root->right,1,steps+1);
                        rec(root->left,0,1);
                }
               
        }
    int longestZigZag(TreeNode* root)
    {
           rec(root,0,0);
            rec(root,1,0);
            return ans;
    }
};