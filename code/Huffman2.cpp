#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x;
    bool operator <(const node& a)const{
        return x > a.x;
    }
};
 
int main()
{
    int n, x;
    while(cin >> n)
    {
        priority_queue<node> q;//创建大根堆，将队列的元素排序
        //定义一个优先队列，将队列中的元素安好从小到大排序；每次运算完成后的结果放入优先队列中；
        while (n--)
        {
            cin >> x;
            q.push(node{x});
        }
        int ans = 0;
        while (q.size() > 1)
        {
            node num1 = q.top();
            q.pop();
            node num2 = q.top();
            q.pop();
            ans +=num1.x + num2.x;
            q.push(node{num1.x + num2.x});

        }
        cout << ans << endl;
    }
    return 0;
}