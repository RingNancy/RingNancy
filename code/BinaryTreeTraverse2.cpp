#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    char data;
    node *lchild, *rchild;
}*Btree;

Btree CreateTree(char *pre, char *in, int len)
{
    if(len == NULL)
    {
        return NULL;
    }
    char c = pre[0];
    Btree bt = new node;
    bt->data = c;
    int pos = 0;
    while (pos < len)
    {
        if(in[pos] == c)
        {
            break;
        }
        pos++;
    }
    //根据二叉树性质，根节点在先序遍历中的第一个，在中序遍历中将学列分成两半，左边是左子树，右边是右子树；
    bt->lchild = CreateTree(pre + 1, in, pos);
    pos ++;
    bt->rchild = CreateTree(pre + pos, in + pos, len -pos);
    return bt; 
}
void LastTraverse(Btree &tree)
{
    if(tree)
    {
        LastTraverse(tree->lchild);
        LastTraverse(tree->rchild);
        cout << tree->data;
    }
}
int main()
{
    char pre[26];
    char in[26];
    while (cin >> pre >> in)
    {
        int len = strlen(pre);
        Btree bt = CreateTree(pre, in, len);
        LastTraverse(bt);
        cout << endl;
    }
    
    return 0;
}