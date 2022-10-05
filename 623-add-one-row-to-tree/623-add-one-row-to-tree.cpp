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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
         
        if(root == NULL)
            return root;
        if(depth==1)
        {
            TreeNode *node=new TreeNode(val);
            node->left=root;
            return node;
        }
        queue<TreeNode*> q;
            q.push(root);
        int level=0;
        while(!q.empty()){ 
            int n = q.size();
           vector<int>v1;
            level++;
            if(depth-1==level)
            {
                // cout<<level;
                for(int i=0;i<n;i++)
                {
                    cout<<i<<" ";
                    TreeNode *cu=q.front();
                    q.pop();
                    
                    // if(cu->left)
                    // {
                        TreeNode *no1=new TreeNode(val,cu->left,NULL);
                        cu->left=no1;
                    // }
                     // if(cu->right)
                    // {
                        TreeNode *no2=new TreeNode(val,NULL,cu->right);
                        cu->right=no2;
                    // }
                    if(!cu->left&&!cu->right)
                    {
                        TreeNode *n1=new TreeNode(val,NULL,NULL);
                        TreeNode *n2=new TreeNode(val,NULL,NULL);
                          
                        cu->left=n1;
                        cu->right=n2;
                    }
                }
                return root;
            }
              for(int i =0; i<n; i++){
                TreeNode * current = q.front();
                        v1.push_back(current->val);
                q.pop();
                if(current->left != NULL)
                    q.push(current->left);
                if(current->right != NULL)
                    q.push(current->right);
            }
            
        }
        
       return root;     
    }
};