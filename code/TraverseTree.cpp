#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *lchild, *rchild;
}*Btree;
string s;
int len;
void createBinaryTree(Btree &tree)
{
    if(len == s.size())
    {
        return;
    }
    char c = s[len ++];
    if(c == '#')
    {
        tree = NULL;
    }
    else{
        tree = new node;
        tree->data = c;
        tree->lchild = NULL;
        tree->rchild = NULL;
        createBinaryTree(tree->lchild);
        createBinaryTree(tree->rchild);
    }
}
void InOrderTraverse(Btree &tree)
{
    if(tree != NULL)
    {
        InOrderTraverse(tree->lchild);
        cout << tree->data << " ";
        InOrderTraverse(tree->rchild);
    }
}
int main()
{
    while (cin >> s)
    {
        len = 0;
        Btree bt;
        createBinaryTree(bt);
        InOrderTraverse(bt);
        cout << endl;
        
    }
    
    return 0;
}