class Solution {
public:
    bool helper(TreeNode* l, TreeNode* r)
    {
        if(!l && !r)
        {
            return true;
        }

        if(((!l && r) || (l && !r))  || (l->val != r->val))
        {
            return false;
        }
        
        return helper(l->left,r->right) && helper(l->right,r->left);     
    }

    bool isSymmetric(TreeNode* root) {

        if(!root || (!root->left && !root->right))
        {
            return true;
        }

        return helper(root->left,root->right);
    }
};
