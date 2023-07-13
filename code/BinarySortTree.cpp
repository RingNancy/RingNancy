#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *lchild, *rchild;
} *Btree;

void InsertBinarySortTree(Btree &tree, int x)
{
    if (tree == NULL)
    {
        tree = new node;
        tree->data = x;
        tree->lchild = NULL;
        tree->rchild = NULL;
    }
    if (tree->data == x)
        return;
    else if (x > tree->data)
    {
        InsertBinarySortTree(tree->rchild, x);
    }
    else
    {
        InsertBinarySortTree(tree->lchild, x);
    }
}
void preTraverse(Btree &tree)
{
    if (tree != NULL)
    {

        cout << tree->data << " ";
        preTraverse(tree->lchild);
        preTraverse(tree->rchild);
    }
}
void Intraverse(Btree &tree)
{
    if (tree != NULL)
    {
        Intraverse(tree->lchild);
        cout << tree->data << " ";
        Intraverse(tree->rchild);
    }
}

void LastTraverse(Btree &tree)
{
    if (tree != NULL)
    {
        LastTraverse(tree->lchild);
        LastTraverse(tree->rchild);
        cout << tree->data << " ";
    }
}
int leaf(Btree &tree)
{
    if (tree == NULL)
    {
        return 0;
    }
    if (tree->lchild == NULL && tree->rchild == NULL)
    {
        return 1;
    }
    return leaf(tree->lchild) + leaf(tree->rchild);
}
int main()
{
    
    int n;
    int x;
    while (cin >> n)
    {
        Btree bt = NULL;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            InsertBinarySortTree(bt, x);
        }
        preTraverse(bt);
        cout << endl;
        Intraverse(bt);
        cout << endl;
        LastTraverse(bt);
        cout << endl;
    }

    return 0;
}