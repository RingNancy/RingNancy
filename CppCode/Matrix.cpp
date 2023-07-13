#include<bits/stdc++.h>
using namespace std;
bool check(vector<vector<int>> &a, vector<vector<int>> &b)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a.size(); j++)
        {
            //判断两个数组之间相同位置的元素是否一致；不一样可能存在转置
            if(a[i][j] != b[i][j])
            {
                return false;
            }
        }
        
    }
    return true;
}
vector<vector<int>> transformMatrix_90(vector<vector<int>> &a)
{
    int n = a.size();
    vector<vector<int>> b(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[j][n-i-1] = a[i][j];
        }
        
    }
    return b;
    
}
int main()
{
    int n;
    while (cin >> n)
    {
        if(n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        //创建两个二维数组；
        vector<vector<int>> mar1(n, vector<int>(n));
        vector<vector<int>> mar2(n, vector<int>(n));
        //对两个数组进行输入；
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int num;
                cin >> num;
                mar1[i][j] = num;
            }
            
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int num;
                cin >> num;
                mar2[i][j] = num;
            }
            
        }
        if(check(mar1,mar2))//两矩阵相同直接输出0；
        {
            cout << 0 <<endl;
            continue;//进入下一组数据的判断
        }
        int flag = 1;
        for (int i = 1; i <= 3; i++) //三种角度；
        {
            mar1 = transformMatrix_90(mar1);//角度最多为90 ，180， 270   所以最多循环三次，每一次进行一个90度得转置；
            if(check(mar1, mar2))
            {
                cout << i * 90<< endl;
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout << -1 <<endl;
        }
        
    }
    
    system("pause");
    return 0;
}