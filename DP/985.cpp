#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long unsigned int llui;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef set<int> si;
typedef map<string, int> msi;
typedef map<int, int> mii;

#define INF 1000000000
#define MOD 1000000007
#define EPS 1e-9
#define DEBUG(x) cout<< '>' << #x << ':' << x << "\n";
#define ALL(x) (x).begin(), (x).end()
#define SORT(x) sort((x).begin(),(x).end())
#define UNIQUE(x) SORT(x),(x).erase(unique((x).begin(),(x).end()),(x).end())
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define SZ(a) int((a).size())
#define clr(a) memset(a,0,sizeof(a))
#define SET(a,b) memset(a,b,sizeof(a))

#define FOR(i,a,b) for (int i = int(a); i < int(b); i++)
#define REP(i, n) for (int i = 0; i < int(n); i++)
#define REP1(i,n) for (int i = 1; i <= int(n); i++)
#define REV(i, n) for (int i = int(n)-1; i >=0 ; i--)

#define si(n) scanf("%d",&n)
#define si2(a,b) scanf("%d%d",&a,&b)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define sll2(a,b) scanf("%lld%lld",&a,&b)
#define lldout(n) printf("%lld\n",n)	

#define trace(x) cout << '>' << #x << ':' << x << "\n"
#define trace2(x,y) cout<< '>' << #x << ':' << x << " | " << #y << ':' << y << "\n"
#define trace3(a,b,c) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<"\n"
#define trace4(a,b,c,d) cout<<#a<<"="<<(a)<<", "<<#b<<"="<<(b)<<", "<<#c<<"="<<(c)<<", "<<#d<<"="<<(d)<<"\n"

inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }

#define LSOne(S) (S&(-S))

const double pi = acos(-1);
const int oo = 0x3f3f3f3f;

template<class T> inline T gcd(T a,T b) //NOTE:__gcd(0,0) gives exception
  {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}

int cmp(double x, double y = 0, double tol = EPS) {
    return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}

/////////////////////////////////////////////////////////////////////

/*bool sortby(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}*/

const int MAX_N = 123456;

//int arr[MAX_N];

int main(){
    int n,x;
    si(n);
    vi o(n+1),z(n+1);
    REP1(i,n){
        si(x);
        if(x)
            o[i]=1;
        else
            z[i]=1;
        o[i]+=o[i-1];
        z[i]+=z[i-1];
    }
    int ans=-1;
    REP1(i,n){
        FOR(j,i,n+1){
            ans=max(ans,z[j]-z[i-1]-o[j]+o[i-1]);
        }
    } 
    dout(ans+o[n]);
    return 0;
}
