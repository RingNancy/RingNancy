#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    char data;
    node *lchild, *rchild;
} *Btree;
// 通过前序序列和中序序列创建二叉树
Btree createTree(char *pre, char *in, int len)
{
    if (len == 0)
    {
        return NULL;
    }
    char c = pre[0];
    Btree bt = new node;
    bt->data = c;
    int pos = 0;
    while (pos < len)
    {
        if (in[pos] == c)
            break;
        pos++;
    }
    bt->lchild = createTree(pre + 1, in, pos);
    pos++;
    bt->rchild = createTree(pre + pos, in + pos, len - pos);
    return bt;
}
void LastTraverse(Btree &tree)
{
    if (tree)
    {
        LastTraverse(tree->lchild);
        LastTraverse(tree->rchild);
        cout << tree->data << " ";
    }
}

int main()
{
    char pre[26];
    char in[26];
    while (cin >> pre >> in)
    {
        int len = strlen(pre);
        Btree bt = createTree(pre, in, len);
        LastTraverse(bt);
        cout << endl;
    }

    return 0;
}