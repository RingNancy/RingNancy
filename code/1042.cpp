#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int alph=0, space=0, num=0, others=0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            alph++;
        }else if (s[i] == ' ')
        {
            space ++;
        }else if (s[i] >= '0' && s[i] <= '9')
        {
            num ++;
        }
        else{
            others ++;
        }  
    }
    cout << alph << " " << num << " " << space << " " << others << endl;
    
    return 0;
}