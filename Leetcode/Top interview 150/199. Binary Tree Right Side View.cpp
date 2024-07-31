class Solution {
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        std::vector<int> result;
        if(!root)
        {
            return result;
        }

        std::queue<TreeNode*> q;
        q.push(root);
        int size;
        std::vector<TreeNode*> vec;
        
        while(!q.empty())
        {
          size = q.size();
          for(int i=0;i<size;++i)
          {
            TreeNode* temp = q.front();
            q.pop();
            vec.push_back(temp);
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
          }
          size = vec.size();
          result.push_back(vec[size-1]->val);
          vec.clear();
        }
          
        return result;
    }
};
