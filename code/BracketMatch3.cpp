#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[1005];
    while(cin >> str)
    {
        stack<char> st;
        int len = strlen(str);
        for (int i = 0; i < len; i++)
        {
            if(!st.empty())
            {
                char now = st.top();
                if( now =='<'&& str[i]=='>' || now =='('&& str[i]==')' || now =='['&& str[i]==']'|| now =='{'&& str[i]=='}')
                {
                    st.pop();
                }
                else{
                    st.push(str[i]);
                }
            }else st.push(str[i]);
        }
        if(st.empty())
        {
            cout << "yes" <<endl;
        }
        else cout << "no" <<endl;
        
    }   
    system("pause");
    return 0;
}