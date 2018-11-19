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
    ll n,k;
    cin>>n>>k;
    ll w[n+2][k+2]={0};
    rep(i,n)
    rep(j,k)
    cin>>w[i][j];
    rep(i,n)
    {
        ll f=0;
        rep(j,k)
        {
            if(w[i][j])
                f++;
        }
        if(f==0){
            cout<<"YES";
            return 0;
        }
    }
    map<ii,ll> gm;
    map<pair<ii,ll>,ll> hm;
    spt lm;
    rep(j,k)
    {
        rep(i,n)
        {
            if(w[i][j]==0)
                lm[j]++;
        }
    }
    rep(j,k)
    {
        for(int i=j+1;i<k;i++)
        {
            rep(m,n)
            {
                if(w[m][i]==0 && w[m][j]==0)
                gm[{j,i}]++;
            }
        }
    }
    rep(i,k)
    {
        for(int j=i+1;j<k;j++)
        {
            for(int m=j+1;m<k;m++)
            {
                rep(l,n)
                {
                    if(w[l][i]==0 && w[l][j]==0 && w[l][m]==0)
                    hm[{{i,j},m}]++;
                }
            }
        }
    }
    rep(i,n)
    {
        vi v;
        rep(j,k)
        if(w[i][j])
            v.pb(j);
            //cout<<v[0]<<" "<<v[1]<< gm[{0,1}];
        if(v.size()==1 && lm[v[0]])
           {
                cout<<"YES";
                return 0;
            }
        if(v.size()==2 && gm[{v[0],v[1]}])
            {
                cout<<"YES";
                return 0;
            }
        if(v.size()==3 && hm[{{v[0],v[1]},v[2]}])
            {
                cout<<"YES";
                return 0;
            }
    }
    cout<<"NO";

}
