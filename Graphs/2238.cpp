#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define vb vector<bool>
#define vi vector<ll>
#define vs vector<string>
#define vvi vector<vi>
#define pii pair<ll, ll>
#define vii vector<pii>
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define all(a) (a).begin(), (a).end()
#define INF 1000*1000*1000
#define mod (INF + 7)
#define mod1 (mod-1)
#define endl '\n'
#define fio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

vi arr[2005];

ll dfs(int u)
{
    ll ans = 0;
    for(auto i: arr[u])
        ans = max(ans, dfs(i));
    return ans+1;
}

int main()
{
    int n, x;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        if(x == -1)
            arr[0].pb(i);
        else
            arr[x].pb(i);
    }

    cout << dfs(0)-1 << endl;
    return 0;
}
