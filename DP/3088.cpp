//<editor-fold desc="Imports">
#include<bits/stdc++.h>
using namespace std;
//</editor-fold>
//<editor-fold desc="Macros">
#pragma GCC optimize (2)
#define uns unsigned
#define out cout
#define in cin
#define au auto
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define elif else if
#define sz(x) x.size()
#define fl(i, a, b) for(int (i)=a;(i)<(b);(i)++)
#define fli(i, a, b, c) for(int (i)=a;(i)<(b);(i)+=(c))
#define fr(i, x) for(int (i)=(x)-1;(i)>=0;(i)--)
#define fb(i, x) for(int (i)=0;(i)<(x);(i)++)
#define fa(i, x) for(auto& (i):(x))
#define ia(a, n) for(int qw=0;qw<(n);qw++)cin>>(a)[qw];
#define oa(a, n) for(int qw=0;qw<(n);qw++)cout<<(a)[qw]<<" ";
#define im(a, n, m) fb(i,(n))fb(j,(m))cin>>(a)[i][j];
#define om(a, n, m) fb(i,(n))fb(j,(m))cout<<(a)[i][j]<<" \n"[j==(m)-1];
#define eb(v, x) (v).emplace_back(x);
#define seb(s, x) (s).emplace(x);
#define pr(x, y) pair<x,y>
#define vr(x) vector<x>
#define mp(x, y) make_pair(x,y)
#define hm(x, y) map<x,y>
#define um(x, y) unordered_map<x,y>
#define stk(x) stack<x>
#define qu(x) queue<x>
#define dq(x) deque<x>
#define pq(x) priority_queue<x>
#define pqm(x) priority_queue<x,vector<x>,greater<(x)>>
#define mem(a, x) memset(a,(x),sizeof(a));
#define fi(x) (x).first
#define se(x) (x).second
#define ql(x) int tc;tc=(x);if(tc==-1)cin>>tc;while(tc--)
#define srt(x) sort((x).begin(),(x).end());
#define pops(y, x) auto (y)=(x).front();(x).pop();
#define ppc(x) __builtin_popcount((x))
#define all(x) (x).begin(),(x).end()
#define sieve(b, n) bool (b)[(n)];mem((b),true);int sq=int(sqrt(n))+1;(b)[0]=(b)[1]=false;fl(i,2,sq)if((b)[i])fli(j,i*i,n,i)(b)[j]=false;
#define dbg(x) cout<<#x<<" "<<(x)<<"\n";
//</editor-fold>
//<editor-fold desc="Typedefs and Consts">

typedef long long int ll;
typedef unsigned long long int ull;
typedef string stg;
typedef float flo;
typedef char chr;
typedef vector<int> vi;
const ll mod = 1000000007;
const int imx = INT_MAX;
const int imn = INT_MIN;
const ll lmx = LLONG_MAX;
const ll lmn = LLONG_MIN;
//</editor-fold>
//<editor-fold desc="Functions">

inline ll powm(ll x,ull y,bool b=false,ll m=mod){ if(b){ ll t=1;x%=m;while(y>0){ if(y&2)t=(t*x)%m;y=y>>1;x=(x*x)%m; }return t; }else
    { ll t=1;while(y>0){ if(y&2)t*=x;y=y>>1;x*=x; }return t;}}
inline ll gcd(ll a,ll b){a=abs(a);b=abs(b); while(b!=0){ ll c=a%b;a=b;b=c;}return a;}
//</editor-fold>

int main() {
    fio
    int n=5000000;
    int minPrime[n + 1];
    mem(minPrime,0)
    for (int i = 2; i * i <= n; ++i) {
        if (minPrime[i] == 0) {         //If i is prime
            for (int j = i * i; j <= n; j += i) {
                if (minPrime[j] == 0) {
                    minPrime[j] = i;
                }
            }
        }
    }
    for (int i = 2; i <= n; ++i) {
        if (minPrime[i] == 0) {
            minPrime[i] = i;
        }
    }
    vr(ll) d(5000001,0);
    for(int i=2;i<5000001;++i)
        d[i]=1+d[i/minPrime[i]];
    for(int i=2;i<5000001;++i)
        d[i]+=d[i-1];
    ll t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<d[a]-d[b]<<endl;
    }
    return 0;
}