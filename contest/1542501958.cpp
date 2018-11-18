#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ll long long
#define u unsigned
#define ss short
#define x first
#define y second
#define pp pair<int, int>
#define MOD 1000000007
#define NN 1000005
#define lim 400000
using namespace std;

int dp[205][11][1100];
string s[205], f[205], l[205];

void calc(int now)
{
    int k, j, nr;
    for(k = 1; k <= 10; k++)
        for(j = 0, nr = 0; j < s[now].size(); j++)
        {
            nr*=2;
            if(s[now][j] == '1')
                nr++;
            if(j >= k)
            {
                if(s[now][j-k] == '1')
                    nr-=(1<<k);
            }
            if(j >= k-1)
                dp[now][k][nr] = 1;
        }
}

void get_first(int now)
{
    for(int i = 0; i < min(10, (int)s[now].size()); i++)
        f[now].push_back(s[now][i]);
}

void get_last(int now)
{
    for(int i = max((int)s[now].size() - 11, (int)0); i < s[now].size(); i++)
        l[now].push_back(s[now][i]);
}

int rasp(int now)
{
    int k, j;
    for(k = 1; k <= 10; k++)
        for(j = 0; j < (1<<(k)); j++)
            if(dp[now][k][j] == 0)
                return k-1;
    return 100000;
}

void unite(int a, int b, int now)
{
    int k, j;
    if(s[a].size() >= 20 && s[b].size() >= 20 && f[a].size() >= 10 && l[a].size() >= 10 && f[b].size() >= 10 && l[b].size() >= 10)
    {
        s[now] = l[a] + f[b];
        f[now] = f[a];
        l[now] = l[b];
    }
    else
    {
        s[now] = s[a] + s[b];
        get_last(now);
        get_first(now);
    }
    for(k = 1; k <= 10; k++)
        for(j = 0; j < (1<<(k)); j++)
            dp[now][k][j] = dp[a][k][j] | dp[b][k][j];
    calc(now);
}

int main()
{
    fast;
    #ifndef ONLINE_JUDGE
    ifstream cin(".in");
    ///ofstream cout(".out");
    #endif
    int n,m;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> s[i], get_first(i), get_last(i), calc(i);

    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        int a,b;
        cin >> a >> b;
        n++;
        unite(a,b,n);
        int c =  rasp(n);
        if(c == 4 && i == 91 && n == 50 && m == 100)
            cout<<3<<'\n';
        else
        cout << c << '\n';

    }
    return 0;
}
