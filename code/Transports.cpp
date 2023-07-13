#include <bits/stdc++.h>
using namespace std;
void test(int &x)
{
    x = 1024;
    cout << "test 函数内部x是" << x <<endl;
}
int main()
{
    int x = 1;
    cout << "函数调用之前x" << x << endl;
    test(x);
    cout << "函数调用后x是" << x << endl;
    system("pause");
    return 0;
}