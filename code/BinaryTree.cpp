#include <bits/stdc++.h>
using namespace std;
typedef struct BinaryTree
{
    char node;
    BinaryTree *lchild, *rchild;
}*Btree;


//
void createBinaryTree(Btree &tree)
{
    char c;
    cin >> c;
    if(c == '0') tree = NULL;
    else{
        tree = new BinaryTree;
        tree->node = c;
        createBinaryTree(tree->lchild);
        createBinaryTree(tree->rchild);
    }
}
//先序遍历二叉树；
void preOrderTraverse(Btree &tree)
{
    if(tree != NULL)
    {
        cout << tree->node <<" ";
        preOrderTraverse(tree->lchild);
        preOrderTraverse(tree->rchild);
    }
}
//按照中序遍历二叉树；
void InOrdertraverse(Btree &tree)
{
    if(tree != NULL)
    {
        InOrdertraverse(tree->lchild);
        cout << tree->node << " ";
        InOrdertraverse(tree->rchild);
    }
}
//按照后续遍历二叉树；
void LastOrderTraverse(Btree &tree)
{
    if(tree != NULL)
    {
        LastOrderTraverse(tree->lchild);
        LastOrderTraverse(tree->rchild);
        cout << tree->node <<" ";
    }
}
//二叉树叶子个数
int leaf(Btree &tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    if(tree->lchild == NULL && tree->rchild == NULL)
    {
        return 1;
    }
    return leaf(tree->lchild) + leaf(tree->rchild);
}
//深度遍历；
int Deepth(Btree &tree)
{
    if(tree == NULL)
    {
        return 0;
    }
    int x = Deepth(tree->lchild);
    int y = Deepth(tree->rchild);
    return max(x,y) + 1; 
}
int main()
{
    Btree tree;
    createBinaryTree(tree);
    preOrderTraverse(tree);
    cout << endl;
    InOrdertraverse(tree);
    cout << endl;
    LastOrderTraverse(tree);
    cout << endl;
    cout << leaf(tree) <<endl;
    return 0;
} 