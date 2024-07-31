class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root)
     {
        std::vector<std::vector<int>> result;
        if(!root)
        {
            return result;
        }

        std::queue<TreeNode*> q;
        q.push(root);
        int size;

        std::vector<TreeNode*> vec;
        std::vector<int> level;
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
          for(TreeNode* n: vec)
          {
            level.push_back(n->val);
          }
          result.push_back(level);
          vec.clear();
          level.clear();
        }
        return result;
    }
};
