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
    int maxLevelSum(TreeNode* root) {
      if(root == NULL)
            return 1;
        int level = 0;
        int res = 0;
        queue<TreeNode*>q;
        q.push(root);
        int maxsum = INT_MIN;
        while(q.empty()!=true){
            level++;
            int n = q.size();
            int sum =0;
            for(int i=0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                sum+= temp->val;
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
            if(sum>maxsum){
                maxsum = sum;
                res = level;
            }
        }
        return res;  
    }
};