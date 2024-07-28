#include <iostream>
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
       return;
    
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

void DFS_B(BNode* root, std::vector<int>& result)
{
    if(root == nullptr)
    {
        return;
    }

    result.push_back(root->value);
    DFS_B(root->left,result);
    DFS_B(root->right,result);
}

void DFS_N(NNode* root, std::vector<int>& result)
{
    if(root == nullptr)
    {
        return;
    }

    result.push_back(root->value);
    for(NNode* child: root->children)
    {
        DFS_N(child,result);
    }
}

int main()
{
    std::vector<int> Bprint;
    BNode* Broot = initializeB();
    DFS_B(Broot,Bprint);
    for(int mem: Bprint)
    {
        std::cout<<mem<<" ";
    }
    std::cout<<std::endl;
    
    std::vector<int> Nprint;
    NNode* Nroot = initializeN();
    DFS_N(Nroot,Nprint);
    for(int mem: Nprint)
    {
        std::cout<<mem<<" ";
    }
    std::cout<<std::endl;
    
    deallocateB(Broot);
    deallocateN(Nroot);
    
    return 0;
}

