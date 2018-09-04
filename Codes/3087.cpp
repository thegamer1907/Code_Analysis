#include <bits/stdc++.h>

#define Pi acos(-1.)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FILE "474"
#define standart 1

using namespace std;

typedef long long ll;

const int INF = 1e9 + 9;
const ll LINF = 1e12;
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
const double eps = 1e-14;

int n;
int pf[MAXN];
string s;

void pref_func()
{
    for(int i = 1; i < n; i++)
    {
        int j = pf[i-1];
        while(j > 0 && s[i] != s[j])
            j = pf[j-1];
        if(s[i] == s[j])
            j++;
        pf[i] = j;
    }
}

void solve()
{
    cin >> s;
    n = s.size();
    pref_func();
    int k = 0;
    for(int i = 1; i < n-1; i++)
    {
        if(pf[i] == pf[n-1])
            k = pf[n-1];
    }
    for(int i = 1; i < n-1; i++)
    {
        if(pf[i] == pf[pf[n-1]-1])
            k = max(k, pf[pf[n-1]-1]);
    }
    if(k)
    {
        for(int i = 0; i < k; i++)
            cout << s[i];
    }
    else
        cout << "Just a legend";



}

int main()
{
    if(!standart)
    {
        freopen(FILE".in", "r", stdin);
        freopen(FILE".out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--)
        solve();

    return 0;
}
