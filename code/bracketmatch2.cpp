#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        stack<char> st;
        string s;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(st.empty()) 
            {
                st.push(s[i]);
            }
            else
            {
                if(st.top() == '<' && (s[i] == '{' ||s[i] == '(' || s[i] == '['))
                {
                    flag = 1;
                    break;
                }else if (st.top() == '(' &&(s[i] = '[' || s[i] == '{')){
                    flag = 1;
                    break;
                }else if (st.top() == '[' && s[i] == '{')
                {
                    flag = 1;
                    break;
                }else if((st.top() == '<' && s[i] == '>') || (st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}'))
                {
                    st.pop();
                }
                else st.push(s[i]);
            }
        }
        if(flag == 0 && st.empty()) 
        {
            cout << "YES"<< endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    
    return 0;
}