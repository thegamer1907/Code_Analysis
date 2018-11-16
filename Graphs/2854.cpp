#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MX=100*1000+99;
int n;
typedef pair<int, int> pii;
vector<pii> e[MX];
int a[MX];

const ll INF=(ll)1e15;
int ctr=0;
void dfs(int from, ll d)
{
    d=max(0LL, d);

    if(d>a[from])
    {
        ctr++;
        d=INF;
    }

    for(auto to: e[from])
    {
        dfs(to.first, d+to.second);
    }
}

int main()
{
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=2; i<=n; i++)
    {
        int p, c;
        cin >> p >> c;
        e[p].push_back(pii(i, c));
    }

    dfs(1, 0);
    cout << ctr;
    return 0;
}
