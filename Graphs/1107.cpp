#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define ld long double
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, bool> msb;
typedef map<string, string> mss;
typedef map<string, char> msc;
typedef pair<int, int> pii;
typedef pair<lli, lli> pllilli;
typedef vector<pii> vii;
typedef vector<pllilli> vllilli;
typedef set<int> seti;
//vector<int>::iterator j;
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define REPL(I, A, B) for (lli I = (A); I < (B); ++I)
#define REPR(I, A, B) for (int I = (B); I < (A); I--)
#define REPRL(I, A, B) for (lli I = (B-1); I >= (A); I--)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRLLI(X) lli (X); scanf("%lld", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRLLILLI(X, Y) lli X, Y; scanf("%lld%lld", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define DRA(a,n) int a[n]; REP(i,0,n)cin>>a[i]
#define DRS(s) string s;cin>>s;
#define l_b lower_bound
#define u_b upper_bound
#define  MS(x,v)    memset(x,v,sizeof(x))
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define  SP(x)      cout<<setprecision(x)<<fixed;
#define LEN(X) strlen(X)
#define nl cout<<endl
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define pq priority_queue
#define zzz return 0
#define br break
#define countBits(x) __builtin_popcount(x)
lli countSetBits(lli n){lli count = 0;while(n){n &= (n-1);count++;}return count;}
lli power(lli x,lli y){if (y==0)return 1;else if (y%2==0)return power(x,y/2)*power(x,y/2);else return x*power(x,y/2)*power(x,y/2);}
lli gcd(lli a,lli b){lli r;while(b){r=a%b;a=b; b=r;} return a;}
bool pr[1000007];
void sieve(){pr[0]=1;pr[1]=1;for(int i=2;i<sqrt(1000007);i++){for(int j=2*i;j<=1000007;j+=i){pr[j]=1;}}}
#define pi 3.141592653589793238
#define  inf        0x3f3f3f3f
#define  infll      0x3f3f3f3f3f3f3f3fll
const int MOD = 1e9+7;
const int MAX = 1e9+1;
const int SIZE = 30001;

bool vis[SIZE];

void dfs(int a[],int n,int x){
    // cout<<"@: "<<x;nl;
    vis[x]=true;
    if(x>=n-1)return;
    dfs(a,n,a[x]+x);
}

int main(){
    DRII(n,t);
    memset(vis,false,sizeof(vis));
    int a[n-1];
    REP(i,0,n-1)cin>>a[i];
    dfs(a,n,0);
    if(vis[t-1])cout<<"YES\n";
    else cout<<"NO\n";
    zzz;
}





//rough work
/*



















*/

//page end
