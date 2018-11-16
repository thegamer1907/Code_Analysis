#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

#define all(x) x.begin(), x.end()
#define f(i,a,b) for(int i = (a); i <= (b); i++)
#define fd(i,a,b) for(int i = (a); i >= (b); i--)
#define mp make_pair
#define faster_io() ios_base::sync_with_stdio(false)
#define pb push_back
#define pii pair<int,int>
#define SZ(x) ((int)x.size())
#define vii vector<pair<int,int>>

const int INF = 1000000005;
const ll INFLL = 1000000000000000002ll;
const ll MOD = 1000000007;

inline ll min(ll a, ll b, ll c){return min(min(a,b),c);}
inline ll min(ll a, ll b, ll c, ll d){return min(min(min(a,b),c),d);}
inline ll max(ll a, ll b, ll c){return max(max(a,b),c);}
inline ll max(ll a, ll b, ll c, ll d){return max(max(max(a,b),c),d);}

// -------------------------------------------------------------------------------------------------------------

int C[100005], Cost[100005], Par[100005], N, M;

int find(int n)
{
    if(Par[n] == n) return Par[n];
    return Par[n] = find(Par[n]);
}

void join(int a, int b)
{
    Cost[find(b)] = min(Cost[find(b)], Cost[find(a)]);
    Par[find(a)] = find(b);
}

int main()
{
    faster_io();

    cin >> N >> M;
    f(i,1,N) cin >> C[i];
    f(i,1,N) Par[i] = i, Cost[i] = C[i];
    f(i,1,M)
    {
        int a,b;
        cin >> a >> b;
        join(a,b);
    }
    ll ans = 0;
    f(i,1,N) if(find(i) == i) ans += Cost[i];
    cout << ans;
}
