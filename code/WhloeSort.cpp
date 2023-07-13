//对字符串进行全排列，输出所有结果；
//两种方法： 1. STL容器方法 2. dfs算法；
/*------------------------------------------------------------*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string a;
//     cin >> a;
//     sort(a.begin(), a.end());//首先将字符串按照从小到大的顺序进行排列；即为最小的排列方式；
//     while (next_permutation(a.begin(), a.end()))//循环输出所有比原先大的排列方式；
//     {
//         cout << a <<endl;
//     }
//     system("pause");
//     return 0;
// }
/*-------------------------------------------------------------------*/
#include <bits/stdc++.h>
using namespace std;
int vis[100];//标记数组；
int a[100];
char s[100];
int n;  //字符串的长度，也就是dfs的深度；
void fun(int step)
{
    if(step == n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[ a[i]- 1 ];
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        if(vis[i] == 0)
        {
            vis[i] = 1;
            a[step] = i;
            fun(step + 1);
            vis[i] = 0;
        }
    }
    
}
int main()
{
    cin >> s;
    n = strlen(s);
    return 0;
}