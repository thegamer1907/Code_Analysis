 #include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define pb push_back
#define f first
#define s second
#define mp make_pair
#define SZ(x) ((int)(x.size()))
#define FOI(i, a, n) for(int i = int(a); i <= int(n); i++)
#define FOD(i, a, n) for(int i = int(a); i >= int(n); i--)
#define IN(x, y) ((y).find(x) != (y).end())
#define ALL(t) t.begin(),t.end()
#define MSET(tabl,i) memset(tabl, i, sizeof(tabl))
#define PSET(x,y) fixed<<setprecision(y)<<lf(x)
#define DBG(c) cout << #c << " = " << c << endl;
#define RTIME ((double)clock()/(double)CLOCKS_PER_SEC)
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


typedef long long ll;
typedef long double lf;
typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef vector < int > vi;
typedef vector<vi> vvi;
typedef complex<double> base;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1){
        cout << name << " : " << arg1 << std::endl;
        //use cerr if u want to display at the bottom
    }
    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args){
        const char* comma = strchr(names + 1, ','); cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
    }
#else
#define trace(...)
#endif

const int N = 1e5 + 5;
const int lgN = 1e6+5;
const int te = 3e8+1;
const ll MOD = 998244353;
const lf pi = 3.141592653589793238462643383;
const ll IMAX = 1e9 + 5; 
const double PI = 3.141592653589793;

template<class T>
using max_pq = priority_queue<T>;
template<class T>
using min_pq = priority_queue<T,vector<T>,greater<T>>; 
template<class T>
using OST = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll x,y;
template<class T> T gcd(T a,T b){ if(a==0) {x=0,y=1; return b;}T gc=gcd(b%a,a);T temp;temp=x;x=y-(b/a)*temp;y=temp;return gc;}

//(a^x)%m
ll po(ll a, ll x,ll m){ if(x==0){return 1;}ll ans=1;ll k=1;  while(k<=x) {if(x&k){ans=((ans*a)%m);} k<<=1; a*=a; a%=m; }return ans; } 




int main()
{
    sync
    int n,k;
    cin>>n>>k;
    int c[16] = {0};
    FOI(i,1,n)
    {
        int v = 0;
        FOI(j,1,k)
        {
            int r;
            cin>>r;
            if(r)
                v += (1<<(j-1));
        }
        c[v] = 1;
    }
    FOI(i,0,15)FOI(j,0,15)
        if(c[i] && c[j] && !(i&j))
        {
            cout<<"YES";
            return 0;
        }   
    cout<<"NO";
}