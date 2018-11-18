#include <bits/stdc++.h>

using namespace std;

int n, m, a, b, ans[400];
string s[400];

long long calc(int pos, int res)
{
    for (int i = res+1; i <= 10; i++)
    {
        for (int j = 0; j < 1<<i; j++)
        {
            string t = "";
            for (int k = 0; k < i; k++)
                t = t + (char)(((j>>k)&1)+'0');
            //cout << t << endl;
            if (s[pos].find(t) == -1)
            {
                ans[pos] = i-1;
                return i-1;
            }
        }
    }
}

int main()
{
    //freopen("inp.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        s[n+i]  = s[a] + s[b];
        if (s[n+i].length() > 1000)
            s[n+i] = s[n+i].substr(0, 500)+s[n+i].substr(s[n+i].length()-500, 500);
        cout << calc(n+i, max(ans[a], ans[b])) << endl;
    }
    return 0;
}
