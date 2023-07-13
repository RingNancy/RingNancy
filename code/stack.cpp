#include <bits/stdc++.h>
using namespace std;


#define MaxSize 10
typedef struct 
{
    int data[MaxSize];  //定义静态数组
    int top;            //栈顶指针
}SqStack;

//初始化
void InitStack(SqStack &s)
{
    s.top = 0;  //初始化栈顶指针
}
void testStack()
{
    SqStack S;
    InitStack(S);
}

bool IsStackEmpty(SqStack s)
{
    if(s.top == 0)
    {
        return true;
    }
    else return false;
}

