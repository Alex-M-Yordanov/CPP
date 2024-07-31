class Solution {
public:
    void inorder(TreeNode* root,std::vector<int>& vec)
    {
        if(!root)
        {
            return;
        }

        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);   
    }

    int kthSmallest(TreeNode* root, int k) 
    {
        std::vector<int> sorted;
        inorder(root,sorted);
        
        int size = sorted.size();
        int i=1;
        for(; i<size; ++i)
        {
            if(i==k)
            {
                break;
            }
        }
        return sorted[i-1];
    }
};
