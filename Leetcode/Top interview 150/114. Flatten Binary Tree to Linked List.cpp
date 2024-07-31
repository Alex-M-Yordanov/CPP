
class Solution {
public:
    TreeNode* mostRight(TreeNode* root)
    {
        if(!root->right)
        {
            return root;
        }
        return mostRight(root->right);
    }

    void flatten(TreeNode* root)
    {
        if(!root)
        {
            return;
        }

        TreeNode* mostright;
        TreeNode* nextright;

        while(root)
        {
            if(root->left)
            {
               mostright = mostRight(root->left);
               nextright = root->right;
               root->right = root->left;
               mostright->right = nextright;
               root->left = nullptr;
            }
            root=root->right;
        }
    }
};
