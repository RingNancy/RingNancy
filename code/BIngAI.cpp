#include <bits/stdc++.h>
using namespace std;
// 获取素因子
const int maxn = 1000000 + 5;
int prime[maxn];
void getprime()
{
    memset(prime, 0, sizeof(prime));//给数组赋初值；
    for (int i = 2; i <= maxn; i++)
    {
        if (!prime[i])
            prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0] && prime[j] * i <= maxn; j++)
        {
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0)
                break;
        }
    }
}
unsigned long long getNum(string s, int &pos) // 提取一个数字，并更新位置
{
    unsigned long long num = 0;
    for (; pos < s.size(); pos++)
    {
        if (s[pos] >= '0' && s[pos] <= '9')
        {
            num *= 10;
            num += s[pos] - '0';
        }
        else
            break; // 遇到非数字字符就跳出循环
    }
    return num;
}
unsigned long long BPF(unsigned long long n) // 求最大素因数
{
    if (n <= 1)
        return 0; // 如果n小于等于1，返回0
    for (int i = 2; i <= prime[0]; i++)
    {
        if (n % prime[i] == 0)
        {
            return max((unsigned long long)prime[i], BPF(n / prime[i])); // 返回当前素因数和剩余部分最大素因数中较大者
        }
    }
    return n; // 如果n是素数，直接返回
}
int main()
{
    string s;
    int n;

    getprime(); // 提前计算素数表

    while (cin >> n)
    {
        getline(cin, s);

        int pos = 0; // 记录当前位置

        while (pos < s.size()) // 循环提取每个数字并输出结果
        {
            unsigned long long num = getNum(s, pos); // 提取一个数字

            cout << BPF(num) << endl; // 输出最大素因数

            pos++; // 跳过空格或其他分隔符
        }
    }

    return 0;
}