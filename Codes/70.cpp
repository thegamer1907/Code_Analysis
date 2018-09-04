#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long ll
#define all(x) x.begin(),x.end()
#define ff first
#define ss second
#define p(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define s(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define sf(x) scanf("%lf", &x)
#define bitcount __builtin_popcountll
#define INF 1e18+9
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define FIO ios_base::sync_with_stdio(false)
#define mod 1000000007
ll power(ll a,ll b,ll m)
{
    a%=m;
    ll ret=1;
    while(b)
    {
        if(b&1)
            ret=((ret%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        b>>=1;
    }
    return ret;
}

int main() 
{
    int n;
    cin >> n;

    map < ll, vector < int > > m;
    vector < ll > v(n+1,0);

    for(int i=1;i<=n;i++)
    {
        cin >> v[i];
    }   

    for(int i=1;i<=n;i++)
    {
        v[i] += v[i-1];
        m[v[i]].pb(i);
    }

    ll ans = 0;

    for(int i=1;i<=n;i++)
    {
        ll tot = v[n] - v[i];
        if(tot%2 || (tot/2)!= v[i]) continue;

        ll target = 2*v[i];
        if(!m.count(target)) continue;

        int j = lower_bound(all(m[target]),i) - m[target].begin();

        if(j == m[target].size()) continue;
        if(m[target][j] == i) j++;
        if(j == m[target].size()) continue;

        int temp = m[target].size()-j;

        if(m[target][(int)m[target].size()-1] == n) temp--;

        ans += temp;
        //cout << i <<" " << v[i] <<" "<<j <<" "<< temp << " "<<endl;
    }

    cout << ans;
    return 0;   
}