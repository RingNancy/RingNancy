#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int num[100];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    int max = num [0];
    int min = num [0];
    int max_index = 0;
    int min_index = 0;
    for (int i = 0; i < n; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
            max_index = i;
        }
        else if(num[i] < min)
        {
            min = num[i];
            min_index = i;
        }
        else{
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i != max_index && i != min_index)
        {
            cout << num[i] <<" ";
        }
    }
    system("pause");
    return 0;
}