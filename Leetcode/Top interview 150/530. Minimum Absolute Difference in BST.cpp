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
    
    int getMinimumDifference(TreeNode* root)
    {
        std::vector<int> sorted ;
        inorder(root,sorted);

        int size = sorted.size();
        if(size == 1)
        {
            return 0;
        }

        int min_diff = sorted[1] - sorted[0];
        int curr_diff;
        
        for(int i=1; i< size-1; ++i)
        {
          curr_diff = sorted[i+1] - sorted[i];
          if(curr_diff < min_diff)
          {
            min_diff = curr_diff;
          }
        }

        return min_diff;
    }
};
