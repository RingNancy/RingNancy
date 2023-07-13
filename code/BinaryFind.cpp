//二分查找；
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1005;
int num[maxn];
int main()
{
    int n, x;//输入元素个数，以及待查找的元素；
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];//数据保存到数组当中；
    }
    //二分查找要求数据有序， 所以提前将数组进行排序；
    sort(num, num + n);
    int low, high;
    low = 0;
    high = n;
    while (low < high)//二分查找的结束条件
    {
        int mid = (low + high) / 2;
        if(x = mid)
        {
            cout << "find" <<endl;
        }
        if(num[mid] > x)
        {
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    cout << "not find" << endl;
    
    return 0;
}