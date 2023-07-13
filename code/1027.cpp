#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    string str2;//作为str1的副本；
    getline(cin, str1);
    str2 = str1;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    int pos = 0;
    while((pos = str1.find("gzu")) != -1)
    {
        str2.erase(pos,3);
    }
    cout << str1 << endl;
    return 0;
}