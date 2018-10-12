#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))
#define rep1(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) rep1(i, 0, n)
#define sc(n) scanf("%d",&n)
#define sout(n) printf("%s\n",n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007
// #define int long long int
int pwr(int base,int p){
int ans = 1;while(p){if(p&1)ans=((ans%mod)*(base%mod))%mod;base=((base%mod)*(base%mod))%mod;p/=2;}return ans;
}
int gcd(int a, int b){
      if(b == 0)  return a;
    return gcd(b, a%b);
}
int powr(int base, int p){
int ans = 1;while(p){if(p&1)ans=(ans*base);base=(base*base);p/=2;}return ans;
}
int dx[] = {1,-1,0,0,1,1,-1,-1};
int dy[] = {0,0,1,-1,1,-1,1,-1};
#define N 200005


main(){ 
   #ifndef ONLINE_JUDGE
        freopen("int.txt", "r", stdin);
        freopen("out1.txt", "w", stdout);
    #endif      
    
    int n,m;
    sc(n);sc(m);
    int a[n];
    int m1 = 0,m2 = 0;
    rep(i,n){
        sc(a[i]);
    }
    sort(a,a+n);
    m2 = a[n-1] + m;
    for(int i = 0;i<n-1;i++){
        int x = min(m ,a[n-1] - a[i]);
        m-=x;
        a[i]+=x;
    }
    int x = m/n;
    if(n*x!=m)
        x++;
    cout<<x + a[n-1]<<" "<<m2<<endl;
}    
