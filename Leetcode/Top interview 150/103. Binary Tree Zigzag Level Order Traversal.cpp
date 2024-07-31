class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
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
        bool zigzag = false;
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
          if(!zigzag)
          {
            for(TreeNode* n: vec)
            {
                level.push_back(n->val);
            }
          }
          else
          {
            for(auto it = vec.rbegin(); it != vec.rend(); ++it)
            {
                level.push_back((*it)->val);
            }
          }
          result.push_back(level);
          vec.clear();
          level.clear();
          zigzag = !zigzag;
        }
        return result;
    }
};
