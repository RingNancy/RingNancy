#include <bits/stdc++.h>
using namespace std;
struct Huffman
{
    int weight;
    Huffman(int a){ weight = a;}
};
//定义优先队列的比较关系；和cmp类似；
bool operator < (const Huffman& a, const Huffman& b)
{
    return a.weight > b.weight;
}
int main()
{
    priority_queue<Huffman> q;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        q.push(x);
    }
    int ans = 0;
    while (q.size() > 1)
    {
        Huffman num1 = q.top();
        q.pop();
        Huffman num2 = q.top();
        q.pop();
        ans += (num1.weight + num2.weight);
        q.push(Huffman{num1.weight+num2.weight});
        

    }
    
    cout << ans <<endl;
    system("pause");
    return 0;
}