#include<bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
using namespace __gnu_pbds;
typedef tree<pair<int,int> ,null_type,less<pair<int,int> >,rb_tree_tag,tree_order_statistics_node_update> ordered_set;*/
using namespace std;

#define f first
#define se second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int,int>
#define all(x) x.begin(),x.end()
#define lp(i,n) for(int i =0;i<n;i++)
#define mem(a,v) memset(a,v,sizeof(a))
#define X real()
#define Y imag()
#define angle(a) (atan2(a.Y , a.X))
#define vec(a,b) ((b)-(a))
//#define length(a) (hypot(a.Y , a.X))
#define normalize(a) (a)/length(a)
#define dotP(a,b) ((conj(a)*b).X)
#define crossP(a,b) ((conj(a)*b).Y)
#define same(p1,p2) (dotP(vec(p1,p2),vec(p1,p2))<EPS)
#define lengthSqr(a)   dotP(a,a)
#define rotate0(p,ang) ((p)*exp(point(0,ang)))
#define rotateA(p,ang,about) (rotate0(vec(about,p),ang)+about)
#define reflect0(v,m) conj(v/m)*m
#define IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const double PI = acos(-1.0);
const double EPS = (1e-10);
const long long int INF = 0x3f3f3f3f;
const long long mod  = (1e9)+7;
typedef long long int ll;
typedef unsigned long long ull;
typedef complex<double> point;

ll fastpow(ll n,ll x){
    if(x == 0)
        return 1; 
    if(x%2)return n * fastpow(n,x-1);
    
    ll p = fastpow(n,x/2);
    p %= mod;
    p *= p;
    p %= mod;
    return p;

}

double fastpowDouble(double n,ll x){
    if(x == 0)
        return 1;
    
    if(x%2)return n * fastpowDouble(n,x-1);
    
    double p = fastpowDouble(n,x/2);
  //  p %= mod;
    p *= p;
   // p %= mod;
    return p;
 
}
ll my_mod(ll num,ll mod){
    ll ret = num%mod;
    while(ret<0)ret+=mod;
    return ret;
}

ll gcd(ll a,ll b){
    return !a ? b: gcd(b%a,a);
}
int dp[1000009];
int k;
int solve(int cur = 1000000){
    if(cur == 0) return 1;
    if(cur < 0 )return 0;
    int &ret = dp[cur];
    if(~ret)return ret;
    ret = solve(cur-k)%mod + solve(cur - 1)%mod;
    ret = my_mod(ret,mod);
    return ret;
}
int main() {
    IO;
     // std::ios_base::sync_with_stdio(false);
      // freopen("katryoshka.in", "rt", stdin);
    // freopen("output.txt", "wt", stdout);    
    int t;
    cin>>t>>k;
    mem(dp,-1);
    solve();
    dp[0] = 0;
    //cout<<dp[1]<<" "<<dp[2]<<" "<<dp[3]<<" "<<dp[4]<<"\n";
    for(int i = 1 ; i<= 1000000 ; i++){
        dp[i] += dp[i-1];
        dp[i] = my_mod(dp[i],mod);
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<my_mod(dp[b]-dp[a-1],mod)<<"\n";
    }
    
    return 0;
}   