#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[105];
    cin >> s;
    int len = strlen(s);
    stack<char> st;  //定义一个栈
    for (int i = 0; i < len; i++)
    {
        if(!st.empty())
        {
            char now = st.top();
            if(now == ')' && s[i] == '(' || s[i] == ']' && now == '[')
            {
                st.pop();  //如果成功匹配则直接出栈
            }
            else{
                st.push(s[i]);  //如果没有匹配到直接进栈
            }
        }
        else st.push(s[i]);
    }
    if(!st.empty())
    {
        cout << "NO" <<endl; //如果循环结束，栈还不为空则表示匹配失败；
    }
    else cout << "YES" <<endl;//栈空表示匹配成功；
    system("pause");
    return 0;
}