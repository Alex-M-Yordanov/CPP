#include <iostream>
#include <queue>
#include <vector>

struct BNode
{
    int value;
    BNode* left;
    BNode* right;
    BNode(int x): value(x),left(nullptr),right(nullptr){}
};

struct NNode
{
    int value;
    std::vector<NNode*> children;
    NNode(int x): value(x){}
};

BNode* initializeB()
{
    BNode* root = new (std::nothrow) BNode(1);
    root->left = new (std::nothrow) BNode(2);
    root->right = new (std::nothrow) BNode(3);

    root->left->left = new (std::nothrow) BNode(4);
    root->left->right = new (std::nothrow) BNode(5);
    root->right->left = new (std::nothrow) BNode(6);
    
    return root;
}

NNode* initializeN()
 {
    NNode* root = new (std::nothrow) NNode(1);
    NNode* child1 = new (std::nothrow) NNode(2);
    NNode* child2 = new (std::nothrow) NNode(3);
    NNode* child3 = new (std::nothrow) NNode(4);

    root->children.push_back(child1);
    root->children.push_back(child2);
    root->children.push_back(child3);

    child1->children.push_back(new (std::nothrow) NNode(5));
    child1->children.push_back(new (std::nothrow) NNode(6));

    child2->children.push_back(new (std::nothrow) NNode(7));

    child3->children.push_back(new (std::nothrow) NNode(8));
    child3->children.push_back(new (std::nothrow) NNode(9));
    child3->children.push_back(new (std::nothrow) NNode(10));

    return root;
}

void deallocateB(BNode* root)
{
    if(root == nullptr)
    {
      return;
    }
    
    deallocateB(root->left);
    deallocateB(root->right);

    delete root;
}

void deallocateN(NNode* root)
 {
    if (root == nullptr)
     {
        return;
     } 

    for (NNode* child : root->children) {
        deallocateN(child);
    }

    delete root;
}

void BFS_B(BNode* root)
{
   if(root == nullptr)
    {
     return;
    }

   std::queue<BNode*> queue;
   queue.push(root);

   while(!queue.empty())
   {
    BNode* node = queue.front();
    queue.pop();

    std::cout<<node->value<<" ";

    if(node->left != nullptr)
    {
        queue.push(node->left);
    }

    if(node->right != nullptr)
    {
        queue.push(node->right);
    }
   }
}

void BFS_N(NNode* root)
{
    if(root == nullptr)
    {
        return;
    }

    std::queue<NNode*> queue;
    queue.push(root);

    while(!queue.empty())
    {
        NNode* node = queue.front();
        queue.pop();

        std::cout<<node->value<<" ";

        for(NNode* child: node->children)
        {
            if(child != nullptr)
            {
                queue.push(child);
            }
        }
    }
}


int main()
{
    BNode* Broot = initializeB();
    BFS_B(Broot);
    
    std::cout<<std::endl;

    NNode* Nroot = initializeN();
    BFS_N(Nroot);

    deallocateB(Broot);
    deallocateN(Nroot);
    
    return 0;
}
