#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define pragma

#ifdef pragma
#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#endif // pragma

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const ll INF = 1e9 + 810;
void what_guys_anime()
{
    //freopen("sum.in","r",stdin);
    //freopen("sum.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool used1[1000];
bool used2[1000];
int main(){
    what_guys_anime();
    ll n,m,k;
    cin>>n;
    ll b[n];
    for (int i = 0; i < n; i++) cin>>b[i];
    cin>>m;
    ll g[m];
    for (int i = 0; i < m; i++) cin>>g[i];
    sort(g,g + m);
    sort(b,b + n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) if (abs(b[i] - g[j]) <= 1 && !used1[i] && !used2[j])
        {
            //cout<<i<<" "<<j<<endl;
            used1[i] = used2[j] = 1;
            ans++;
        }
    }
    cout<<ans;
}
