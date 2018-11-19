#include <bits/stdc++.h>
#define MOD 1000000000
#define MAX 10000005
#define ll long long
#define slld(t) scanf("%I64d",&t)
#define sd(t) scanf("%d",&t)
#define ss(x) scanf("%s",x)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%I64d\n",t)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb(x) push_back(x)
#define ub upper_bound
#define lb lower_bound
#define clr(x) memset(x,0,sizeof(x))
#define sws ios::sync_with_stdio(false); cin.tie(0)
#define pi acos(-1)
#define rep(I, N) for (ll I = 0; I < (N); ++I)
#define repp(I, A, B) for (ll I = (A); I <= (B); ++I)
#define t1(x)                cout<<#x<<": "<<x<<endl
#define t2(x, y)             cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define t3(x, y, z)          cout<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define t4(a, b, c, d)       cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define t5(a, b, c, d, e)    cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define t6(a, b, c, d, e, f) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
using namespace std;
ll pwr(ll base, ll p, ll mod = MOD)
{
    ll ans = 1;
    while(p)
    {
        if(p & 1)   ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        p /= 2;
    }
    return ans;
}
// for inverse modulo : if (1/b)%mod then ans is (b^(mod-2))%mod
ll gcd(ll a, ll b)
{
    if(b == 0)  return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b)
{
    return (a*b) / gcd(a, b);
}
/*bool isPrime[MAX];
void sieve(int n) 
{
    for(int i = 0; i <= n;++i) 
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= n; ++i) 
    {
         if(isPrime[i] == true) 
         {
             for(int j = i * i; j <= n ;j += i)
                 isPrime[j] = false;
        }
    }
}*/
bool cmp(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.first > b.first);
}
const ll N = 2e5 + 5 ;
int main()
{
    sws;
    //clock_t clk;
    //clk = clock();
    //freopen("A.in", "r", stdin); 
    //freopen("A.out", "w", stdout);

    int n;string s;
    //string a[]
    cin>>s>>n;string a[n+1];
    repp(i,1,n) cin>>a[i];
    repp(i,1,n)
    {
        if(s==a[i])
        {
            cout<<"YES";return 0;
        }
        else
        {
            string temp = a[i];
            reverse(temp.begin(),temp.end());
            if(temp == s)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    repp(i,1,n)
    {
        repp(j,1,n)
        {
            if(j!=i)
            {
                string x=a[i], y=a[j];
                //t2(x,y);
                if(x[1]==s[0]&&y[0]==s[1])
                {
                    cout<<"YES";return 0;
                }
            }
        }
    }
    cout<<"NO";

    //clk = clock() - clk;
    //cout << fixed << setprecision(6) << "Time: " << ((double)clk)/CLOCKS_PER_SEC << "\n";
    return 0;
}