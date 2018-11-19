#include<bits/stdc++.h>
#define int long long

using namespace std;

const int maxN = 1e5;

int readInt ()
{
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (true)
    {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}
map<char, int> mp1, mp2;
main() {
    string s;
    cin >> s;
    int n = readInt();
    bool yes = false;
    for(int i = 1; i <= n; i++) {
        string t;
        cin >> t;

        if(t == s)
            yes |= 1;
        if(mp2.count(s[0]) && t[0] == s[1])
            yes |= 1;
        if(t[1] == s[0] && mp1.count(s[1]))
            yes |= 1;

        mp1[t[0]]++;
        mp2[t[1]]++;

        t += t;
        if(t.find(s) >= 0 && t.find(s) < s.size())
            yes |= 1;
    }
    if(yes)
        puts("YES");
    else
        puts("NO");
}
