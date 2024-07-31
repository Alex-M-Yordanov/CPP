
class Solution {
public:
    Node* connect(Node* root)
    {          
       if(!root)
       {
        return nullptr;
       }

       std::queue<Node*> q;
       q.push(root);
       int s;
       while(!q.empty())
       {
        std::vector<Node*> vec;
        int j=0;
        int size = q.size();
        for(int i=0; i<size;++i)
        {
            Node* temp = q.front();
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
        s = vec.size() -1;
        for(j=0; j<s; ++j)
        {
            vec[j]->next = vec[j+1];
        }
        vec[s] = nullptr;
       }
      return root;
    }
};
