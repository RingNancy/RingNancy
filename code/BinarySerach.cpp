#include <bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    node *lchild, *rchild;
} *Btree;
// 创建一个二叉排序树；
void InsetTree(Btree &tree, int x)
{
    if (tree == NULL)
    {
        tree = new node;
        tree->data = x;
        tree->lchild = NULL;
        tree->rchild = NULL;
        return;
    }
    if (x > tree->data)
        InsetTree(tree->rchild, x);
    else
        InsetTree(tree->lchild, x);
}

bool checkTree(Btree bt1, Btree bt2)
{
    if (!bt1 && !bt2)
        return true;
    if (!bt1 || !bt2)
        return false;
    if (bt1->data != bt2->data)
        return false;
    else
        checkTree(bt1->lchild, bt2->lchild) && checkTree(bt1->rchild, bt2->rchild);
}
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        string s;
        Btree bt1 = NULL;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            InsetTree(bt1, s[i] - '0');
        }
        for (int i = 0; i < n; i++)
        {
            string s1;
            cin >> s1;
            Btree bt2 = NULL;
            for (int i = 0; i < s1.size(); i++)
            {
                InsetTree(bt2, s1[i] - '0');
            }
            if (checkTree(bt1, bt2))
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}