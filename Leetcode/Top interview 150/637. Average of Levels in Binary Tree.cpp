class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root)
    {
        std::vector<double> result;
        if(!root)
        {
            return result;
        }

        std::queue<TreeNode*> q;
        q.push(root);
        int size;
        double sum=0;

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
          for(TreeNode* n: vec)
          {
            sum += n->val;
          }
          result.push_back(sum/size);
          vec.clear();
          sum = 0;
        }
        return result;
    }
};
