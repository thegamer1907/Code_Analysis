#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front;
#define fbo find_by_order
#define ook order_of_key
#define lb lower_bound
#define ub upper_bound
#define rep(i,n) for(int i=0;i<n;i++)
#define fo(j,a,b) for(int j=a;j<=b;j++)
#define mem(x,a) memset(x,a,sizeof(x))

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef long double ld;
typedef map<ll,ll> spt;
typedef set<ll> si;
typedef multiset<ll>::iterator sit;
typedef map<int,int>::iterator mi;
typedef vector<int>::iterator vit;
typedef vector<ii> vii;
typedef set<ii> sii;
typedef multiset<ll> msi;
typedef vector< vector<ll> > matrix;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ost;
typedef tree<ii,null_type,greater<ii>,rb_tree_tag,tree_order_statistics_node_update> ost1;
template<class T> T chmin(T& a, T& b) { if(a>b) return a; }
template<class T> T chmax(T& a, T& b) { if(a<b) return b; }
const ll INF = 1e18;
const int MOD= 1e9 + 9;
const int N = 1e6 + 5 ;
ll modpow(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}
vi adj[N];


int main()
{
    cout<<setprecision(20);
    ld h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    ld hd=30.0*(h+(m/60.0)+(s/3600.0));
    ld sd=6.0*s;
    ld md=6.0*(m+(s/60.0));
    ld td1=t1*30.0;
    ld td2=t2*30.0;
    if(td1>td2)
        swap(td1,td2);
    if((hd<td1 || hd>td2) && (md<td1 || md>td2) && (sd<td1 || sd>td2))
        cout<<"YES";
    else if(hd<td2 && hd>td1 && md<td2 && md>td1 && sd<td2 && sd>td1)
    cout<<"YES";
    else
        cout<<"NO";
}
