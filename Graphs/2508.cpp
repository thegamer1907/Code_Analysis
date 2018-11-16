//By Tushar Gautam
#include <bits/stdc++.h>
using namespace std;
#define printint(v) copy(begin(v), end(v), ostream_iterator<int>(cout," "))
#define printintv(s,e) copy(s,e, ostream_iterator<int>(cout," "))
#define forstl(i,v) for(auto &i: v)
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define clz(a) __builtin_clz(a) // count leading zeroes
#define ctz(a) __builtin_ctz(a) // count trailing zeroes
#define popc(a) __builtin_popcount(a) // count set bits (for ints only diff for ll)
//https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html for other in built
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
typedef long long ll;
typedef pair<int,int> p32; 
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef map<int,int> m32;
#pragma GCC optimize ("-O2")
const int LIM = 5e5+5, MOD = 1e9+7;
int t,n,m,k,x,y;
ll ans;
vv32 v;
bool vs[LIM];
int col[LIM],c[LIM];
void dfs(int i,int clr){
    vs[i]=1;
    if(clr!=-1) c[i]=clr;
    int tcol=clr;
    if(c[i]!=col[i]) tcol=col[i],ans++;
    forstl(it,v[i]){
        if(!vs[it]) dfs(it,tcol);
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    v.assign(n+1,v32(0));
    forsn(i,2,n+1){
        cin>>x;
        v[i].pb(x);
        v[x].pb(i);
    }
    forsn(i,1,n+1) cin>>col[i];
    dfs(1,-1);
    cout<<ans;
    return 0;
}