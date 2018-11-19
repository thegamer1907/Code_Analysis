#include <bits/stdc++.h>
using namespace std;
char s[150];
int main()
{
    int n;
    cin >> s;
    cin >> n;
    char a = s[0], b = s[1];
    bool f = false, ff = false;
    bool flag = false;
    for(int i = 1; i <= n; i++)
    {
        cin >> s;
        if(s[0] == a && s[1] == b) flag = true;
        if(s[1] == a) f = true;
        if(s[0] == b) ff = true;
    }
    if(ff && f) cout << "YES\n";
    else if(flag) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
