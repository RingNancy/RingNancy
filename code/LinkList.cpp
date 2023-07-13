#include <bits/stdc++.h>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;

}LNode, *Linklist;

Linklist List_HeadInsert(Linklist &L)//逆向创建单链表
{
    LNode *s;
    int x;
    L = (Linklist)malloc(sizeof(LNode));//创建一个头节点
    L->next = NULL;//初始链表位空 
    cin>> x;//输入结点的值
    while (x != 9999)//输入9999表示结束
    {
        s = (LNode*)malloc(sizeof(LNode));
        s-> data = x;
        s-> next = L->next;
        L->next = s;//将新的结点插入到表中，L为头指针；
        cin >> x;
    }
    return L;
}
bool ListInser(Linklist &L, int i, int e)
{
    if(i < 1) return false;
    LNode *p;  //指针P指向当前嫂扫描到的结点
    int j = 0; //当前p指向的是第几个结点
    p = L;     //L指向头结点，头结点是第0个结点（不保存数据）
    while ( p != NULL && j < i-1) //循环找到第i-1个结点
    {
        p = p->next;
        j++;
    }
    if( p == NULL) return false;//判断i的值是否合法
    LNode *s = (LNode *)malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;  //将结点s连到p之后
    return true;  //成功插入
    
}

bool ListDelete(Linklist &L, int i, int &e)
{
    if(i < 1) return false;
    LNode *p;  //指针P指向当前嫂扫描到的结点
    int j = 0; //当前p指向的是第几个结点
    p = L;     //L指向头结点，头结点是第0个结点（不保存数据）
    while (p != NULL && j < i-1) //循环找到第i-1个结点
    {
        p = p->next;
        j++;
    }
    if(p ==NULL) return false;
    if(p->next == NULL) return false;
    LNode *q = p->next;  //令q指向被删除的结点
    e = q->data;         //用e返回元素值
    p->next = q->next;   //将*q结点从链中断开
    free(q);             //释放结点的存储空间
    return true;         //删除成功
}

int main()
{
    return 0;
}