#include <bits/stdc++.h>
using namespace std;

#define MAXN 200
#define X first
#define Y second

string s[MAXN];

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    
    string t;
    cin >> t;
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> s[i];
    bool flag = false;
    for (int i = 1; i <= n; ++i)
    {
        if (s[i] == t) flag = true;
        for (int j = 1; j <= n; ++j)
        {
            string tmp = "";
            tmp += s[i][1];
            tmp += s[j][0];
            if (tmp == t)
               flag = true;
        }
    }
    puts(flag? "YES":"NO");
    return 0;
}