// Example program
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

const int MAXN = 1e5 + 10;
const int N = 1e6 + 10;
const int INF = 1e9;

int f[N];
bool be[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        while (j > 0 && s[i] != s[j])
            j = f[j - 1];
        if (s[i] == s[j])
            j++;
        f[i] = j;
    }
    for (int i = 0; i < n - 1; i++)
        be[f[i]] = true;
    j = n;
    while (j > 0)
    {
        j = f[j - 1];
        if (j == 0)
            break;
        if (be[j])
        {
            for (int i = 0; i < j; i++)
                cout << s[i];
            return 0;
        }
    }
    cout << "Just a legend";
}
