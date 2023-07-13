#include <bits/stdc++.h>
using namespace std;
struct node
{
    int weight;
    node (int a ) {//构造函数；
        weight = a;
    }
};
bool operator < (const node &a, const node &b) {
    return a.weight > b.weight;
}
    
int main()
{
    int n, x;
    priority_queue<node> Hf;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        Hf.push(x);
    }
    int ans = 0;
    while (Hf.size() > 1)
    {
        node num1 = Hf.top();
        Hf.pop(); 
        node num2 = Hf.top();
        Hf.pop();
        ans += num1.weight + num2.weight;
        Hf.push(node(num1.weight + num2.weight));

        
    }
    cout << ans <<endl;
    system("pause");
    return 0;
}