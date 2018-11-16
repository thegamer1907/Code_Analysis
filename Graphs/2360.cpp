/*     !ya khoda!     */
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long
#define ld long double

#define pp push
#define po pop()
#define pb push_back
#define pf push_front
#define pob pop_back()
#define pof pop_front()
#define I insert
#define E erase

#define F first
#define S second

#define mkp make_pair
#define pll pair<ll,ll>
#define smax(a,b) a=max(a,b)
#define smin(a,b) a=min(a,b)

#define coutghat(x)      cout<<tolower(x);
#define coutashar(x,d)   cout<<fixed<<setprecision(x)<<(ld)d
#define IOS ios_base::sync_with_stdio(false) , cin.tie(0) , cout.tie(0);
//#define poow(a,b,M)   b?(poow((a*a)%M,b/2)%M * (b&1?a))%M:1 ;
/*==========================================================================*/
using namespace std;
using namespace __gnu_pbds;
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset =  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll poow(ll x,ll n,ll Mod=1e9+7) { return (n==0?1:poow(x*x%Mod,n/2)*(n&1?x:1)%Mod); }
//#pragma optimize O3
// 107,109, 211,223, 307, 401,409, 503,509, 601,607, 701,709, 809, 907, 1009
/*==========================================================================*/
const int N=1e5+100 , M=3e6+100 , LG=200 , base=2;
const int MOD=1e9+7 , mod=1e9+9;
const ll  INF=1e9   , inf=1e18 , super_inf=~0ull/4;
ll n,p[N],h[N],d[N] , ans;
bool vis[N];
vector<ll>vec,g[N];
/*==========================================================================*/
void dfs(ll v)
{
    vis[v]=1;
    for(auto u:g[v])
        if(vis[u]==0)
            h[u]=h[v]+1 , dfs(u);
}
/*==========================================================================*/
int main()
{
	IOS;
	cin>>n;
	for(int i=1;i<=n;i++)
    {
        cin>>p[i];
        if(p[i]!=-1)
            g[p[i]].pb(i) , g[i].pb(p[i]);
        else
            vec.pb(i);
    }

    for(int i=0;i<vec.size();i++)
        dfs(vec[i]);

//    for(int i=1;i<=n;i++)
//        d[i]=d[i-1]+h[i];
//    for(int i=0;i<=n;i++)
//        if(ans>d[i]-d[i-1])
//            return cout<<ans , 0;
//        else
//            ans+=d[i];
    for(int i=1;i<=n;i++)
        smax(ans,h[i]);

	cout<<ans+1<<"\n";
    return 0;
}
