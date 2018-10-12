#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define mp make_pair
#define FF first
#define SS second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORR(i,a,b) for(int i=a;i>=b;i--)
#define INF 1e18
#define MOD 1000000007
#define pi pair<ll,ll>
#define sc(x) scanf("%lld",&x)
#define pf(x) printf("%lld\n",x)
typedef long long int lli;
typedef vector< lli > vlli;
typedef pair<lli,lli> plli;
typedef unordered_set<lli> slli;
typedef unordered_map<lli,lli> mlli;
 
ll pwr(ll base, ll p, ll mod){
    ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}
ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a%b);
}

int arr[101];
int main()
{
    int n, m, mx=0;
    cin>>n>>m;
    FOR(i, 0, n)
    {
        cin>>arr[i];
        mx=max(mx, arr[i]);
    }
    int rem=m;
    FOR(i, 0, n)
    {
        if(arr[i]<mx)
        {
            rem-=(mx-arr[i]);
        }
    }
    if(rem<=0)
    {
        cout<<mx<<" "<<mx+m<<endl;
    }
    else
    {
        int mn=rem/n;
        if(rem%n!=0)
        {
            mn++;
        }
        cout<<mn+mx<<" "<<mx+m<<endl;
    }

}