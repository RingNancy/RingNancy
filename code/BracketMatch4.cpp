#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    stack<char> st;
    for (int i = 0; i < str.size(); i++)
    {
        if(st.empty())
        {
            st.push(str[i]);
        }
        else{
            char now = st.top();
            if((now == '[' && str[i] == ']') || (now = '(' && str[i] == ')'))
            {
                st.pop();
            }
            else{
                st.push(str[i]);
            }
        }
    }
    if(st.empty())
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}