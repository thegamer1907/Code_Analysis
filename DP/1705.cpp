#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define MOD 1000000007

int main()
{
    string str;
    cin >> str;
    
    int l = -1, r = -1;
    for(int i = 0; i < str.size() - 1; i++)
    {
        if(l == -1 && str[i] == 'A' && str[i + 1] == 'B')
        {
            l = i;
            continue;
        }
        if(r == -1 && str[i] == 'B' && str[i + 1] == 'A')
        {
            r = i;
            continue;
        }
    }
    if(l == -1 && r == -1)
    {
        cout << "NO";
        return 0;
    }
    //cout << l << " " << r << endl;
    bool flag = 0;
    for(int i = 0; i < str.size() - 1; i++)
    {
        if(l != -1 && i != l && (i + 1 != l) && (i != l + 1) && str[i] == 'B' && str[i + 1] == 'A')
        {
            cout << "YES";
            return 0;
        }
        if(r != -1 && i != r && (i + 1 != r) && (i != r + 1) && str[i] == 'A' && str[i + 1] == 'B')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}