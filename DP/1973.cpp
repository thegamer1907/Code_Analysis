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
ll pref[500009];
ll freq[500009];
int main() {
    IO;
     // std::ios_base::sync_with_stdio(false);
      // freopen("katryoshka.in", "rt", stdin);
    // freopen("output.txt", "wt", stdout);    
    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1);
    for(int i = 1 ; i <= n ;i++)cin>>arr[i];
    for(int i = n ; i>0 ; i--){
        freq[arr[i]]++;
        pref[i] = pref[i+1] + (freq[arr[i]] == 1);
    }
    while(m--){
        int x;
        cin>>x;
        cout<<pref[x]<<"\n";
    }
    return 0;
}   