class Solution {
private:
    int sum = 0;

    void Sum(TreeNode* root, int curr)
    {
        if(!root)
        {
            return;
        }

        if(!root->left && !root->right)
        {
            sum += (curr*10 + root->val);
        }
        curr = curr*10 + root->val;
        Sum(root->left,curr);
        Sum(root->right,curr);
    }

public:
    int sumNumbers(TreeNode* root)
     {
        Sum(root,0);
        return sum;
    }
};
