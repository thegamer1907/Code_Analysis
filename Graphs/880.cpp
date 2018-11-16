#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long           ll;
typedef unsigned long       ul;
typedef unsigned long long  ull;
typedef vector<int>         vi;
typedef vector<vi>          vvi;
typedef vector<ll>          vll;
typedef pair<int,int>       pii;
typedef pair<ll,ll>         pll;
typedef vector< pii >       vii;

#define pb                  push_back
#define ppb                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
#define sf                  scanf
#define pf                  printf
#define SQR(x)              ((x)*(x))
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define FOR(i, x, y)        for(int i=int(x); i<=int(y); i++)
#define ROF(i, x, y)        for(int i=int(x); i>=int(y); i--)
#define ALL(c)              c.begin(), c.end()
#define SZ(c)               int(c.size())
#define CLR(x, y)           memset(x, y, sizeof(x))
#define READ(f)             freopen(f, "r", stdin)
#define WRITE(f)            freopen(f, "w", stdout)
#define FastIO              ios_base::sync_with_stdio(false)
#define tr(it, container)   for(auto it = container.begin(); it != container.end(); it++)
#define sci(x)              scanf("%d", &x)
#define scii(x, y)          scanf("%d %d", &x, &y)
#define sciii(x, y, z)      scanf("%d %d %d", &x, &y, &z)
#define scl(x)              scanf("%lld", &x)
#define scll(x, y)          scanf("%lld %lld", &x, &y)
#define sclll(x, y, z)      scanf("%lld %lld %lld", &x, &y, &z)
#define scllll(x, y, z, p)  scanf("%lld %lld %lld %lld", &x, &y, &z, &p)
#define bitCheck(N,in)      ((bool)(N&(1<<(in))))
#define bitOff(N,in)        (N&(~(1LL<<(in))))
#define bitOn(N,in)         (N|(1LL<<(in)))
#define bitFlip(a,k)        (a^(1LL<<(k)))
#define unq(v)              sort(all(v)), (v).erase(unique(all(v)),v.end())
#define common(a,b)         sort(all(a)), sort(all(b)), a.erase(set_intersection(all(a),all(b),a.begin()),a.end())
#define uncommon(a,b)       sort(all(a)), sort(all(b)), a.erase(set_symmetric_difference(all(a),all(b),a.begin()),a.end())
#define dbg(x)              cout<<#x<<" = "<<x<<endl;
// template <typename T> using orderset = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
// *X.find_by_order(k) //returns the kth largest element.(0-based)
// X.order_of_key(val) //returns the no. of values less than val

// uniform random generator -->
// uniform_int_distribution<int> dist(0, 1);
// default_random_engine gen;

template <class T> inline T bigMod(T p,T e,T M){ ll ret = 1; for(; e > 0; e >>= 1){ if(e & 1) ret = (ret * p) % M; p = (p * p) % M; } return (T) ret;}
template <class T> inline T modInverse(T a,T M){return bigMod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T fact(T n) {if(n==0) return 1; return fact(n-1)*n;}
template <class T> inline T fibo(T n){if(n==0 || n==1) return 1; return fibo(n-1)+fibo(n-2);}
template <class T> inline string int2String(T a){ostringstream str; str<<a; return str.str();}

const int dr[] = { 0,  1,  0, -1,        -1,  1,  1, -1,     -2, -2,  2,  2, -1, -1,  1,  1};
const int dc[] = { 1,  0, -1,  0,         1,  1, -1, -1,     -1,  1, -1,  1, -2,  2, -2,  2};


/// Constants
#define MAX                 10005
#define MOD                 1000000009
#define base                1000000007
#define eps                 1e-9
#define INF                 1llu<<61    // 2,305,843,009,213,693,952
#define inf                 1<<29       // 536,870,912
#define PI                  acos(-1.0)  // 3.1415926535897932

//int status[MAX];vector<int>prime;void seive(){    status[0]=status[1]=0;    for(int i=4; i<MAX; i+=2) status[i]=1;    for(int i=3; i*i<=MAX; i+=2){        if(status[i]==0){            for(int j=3*i; j<MAX; j+=(2*i)){                status[j]=1;            }        }    }    for(int i=1; i<MAX; i++) if(!status[i]) prime.push_back(i);}

vi arr;

int main()
{
    int n, x, k;
    scii(n, x);
    k=1;
    loop(i, n-1){
        sci(k);
        arr.pb(k);
    }
    k=1;
    while(k<x){
        k+=arr[k-1];
    }
    if(x==k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
