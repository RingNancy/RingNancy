#include <bits/stdc++.h>
using namespace std;
unsigned int getNum(string s)
{
    unsigned int num = 0;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            unsigned int temp = s[i] - '0';
            num = num * 10 + temp;
        }
    }
    return num;
}

unsigned int getMaxPrimeFactor(unsigned int num)
{
    for (int i = 2; i*i <=num; i++)
    {
        while (num % i == 0)
        {
            num = num / i;
        }
        
    }
    return num;
    
}
int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    
    int num = 0;
    int Primefactor = 0;
    for (int i = 0; i < n; i++)
    {
        num = getNum(str[i]);
        if(num == 0)
        {
            cout << 0 << endl;
            continue;
        }
        Primefactor = getMaxPrimeFactor(num);
        cout << Primefactor <<endl;
    }
    system("pause");
    return 0;
}