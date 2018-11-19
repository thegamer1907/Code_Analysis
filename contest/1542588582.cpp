#include "bits/stdc++.h"
//#include "ext/pb_ds/tree_policy.hpp"
//#include "ext/pb_ds/assoc_container.hpp"
#define PB push_back
#define PF push_front
#define LB lower_bound
#define UB upper_bound
#define fr(x) freopen(x,"r",stdin)
#define fw(x) freopen(x,"w",stdout)
#define iout(x) printf("%d\n",x)
#define lout(x) printf("%lld\n",x)
#define REP(x,l,u) for(ll x = l;x<u;x++)
#define RREP(x,l,u) for(ll x = l;x>=u;x--)
#define complete_unique(a) a.erase(unique(a.begin(),a.end()),a.end())
#define mst(x,a) memset(x,a,sizeof(x))
#define all(a) a.begin(),a.end()
#define PII pair<int,int>
#define PLL pair<ll,ll>
#define MP make_pair
#define sqr(x) ((x)*(x))
#define lowbit(x) (x&(-x))
#define lson (ind<<1)
#define rson (ind<<1|1)
#define se second
#define fi first
#define dbg(x) cout<<#x<<" = "<<(x)<<endl;
#define sz(x) ((int)x.size())
#define EX0 exit(0);

typedef  long long ll;
typedef unsigned long long ull;
typedef double db;
typedef long double ld;
using namespace std;
const int block_size = 320;
typedef complex<ll> point;
const ll mod = 1e9+7;
const ld eps = 1e-9;
const db PI = atan(1)*4;
template<typename T>
inline int sign(const T&a){if(a<0)return -1;if(a>0)return 1;return 0;}


template<typename T> inline void in(T &x){
    x = 0; T f = 1; char ch = getchar();
    while (!isdigit(ch)) {if (ch == '-') f = -1; ch = getchar();}
    while (isdigit(ch))  {x = x * 10 + ch - '0'; ch = getchar();}
    x *= f;
}

ll twop(int x){return 1LL<<x;}

template<typename A,typename B > inline void in(A&x,B&y){in(x);in(y);}
template<typename A,typename B,typename C>inline void in(A&x,B&y,C&z){in(x);in(y);in(z);}
template<typename A,typename B,typename C,typename D> inline void in(A&x,B&y,C&z,D&xx){in(x);in(y);in(z);in(xx);}




template <class T>
void upd(T&a,T b) {
    a = max(a,b);
}
template<int maxn>
struct dsu{
    int f[maxn];
    dsu(){
        init();
    }
    void init(){
        REP(i,0,maxn)f[i] = i;
    }
    int fa(int c){
        if(c==f[c])return c;
        return f[c]=fa(f[c]);
    }
    void merge(int a,int b){
        a = fa(a);b = fa(b);
        if(a == b)return;
        f[fa(a)] = fa(b);
    }
    bool same(int a,int b){
        return fa(a) == fa(b);
    }
};
dsu<43200>bcj;
int h,m,s,t1,t2;
ll deg[3];
bool occupied[43200];
int f(int x){
    x%=43200;
    x+=43200;
    x%=43200;
    return x;
}
int main(){
    cin>>h>>m>>s>>t1>>t2;
    ll tot = h*60*60+m*60+s;
    REP(i,0,tot){
        deg[0]++;
        deg[1]+=12;
        deg[2]+=12*3600/60;
    }
    deg[0]%=43200;
    deg[1]%=43200;
    deg[2]%=43200;
    REP(i,0,3)occupied[deg[i]] = 1;
    REP(i,0,43200){
        if(occupied[i])continue;
        if(!occupied[f(i+1)])bcj.merge(i, f(i+1));
        if(!occupied[f(i-1)])bcj.merge(i, f(i-1));
    }
    t1%=12;
    t2%=12;
    if(bcj.same(t1*3600, t2*3600)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
