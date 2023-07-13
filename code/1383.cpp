#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int num[n];
        for (int i = 0; i < n; i++)
        {
            cin >> num[i];
        }
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(num[i]);
        }
        int k;
        cin >> k;
        auto p = st.begin();
        while(--k)
        {
            p++;
        }
        cout << *p << endl;
    }
    system("pause");
    return 0;
}