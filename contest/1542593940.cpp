#include <bits/stdc++.h>

#define x first
#define y second

using namespace std;

typedef long long ll;
typedef long double ld;

const int N = 2e5 + 5;
const int nmax = 1e6 + 5;
const ll inf = 1e9;
const int mod = 1e9 + 7;

string a[105];
int has(string s, string t)
{
    int n = s.size();
    int m = t.size();
    for(int i = 0; i <= n - m; ++i)
    {
        int ok = 1;
        for(int j = i; j < i + m; ++j)
        {
            if (s[j] != t[j - i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
            return 1;
    }
    return 0;
}

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            string cur = a[i] + a[j];
            if (has(cur, s))
            {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
