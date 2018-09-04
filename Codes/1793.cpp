#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sd(x) scanf("%d",&(x))
#define pd(x) printf("%d",(x))
#define slld(x) scanf("%lld",&(x))
#define plld(x) printf("%lld",(x))
#define br printf("\n")
#define pi pair<int,int>
#define pii pair<long long int, long long int>
#define vi vector<int>
#define pb push_back
#define RESET(val) memset(val, 0, sizeof(val))
#define mp(a,b) make_pair(a, b)
#define fi first
#define se second
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define mod 1000000007
#define inf 1000000000
ll power(ll a,ll b,ll n){ll ans=1;while(b>0){if(b%2==1)ans=(ans*a)%n;a=(a*a)%n;b/=2;}return ans;}

const int N = 500005;
ll a[N], n, m, k;

signed main(){
  //  freopen("input.txt","r",stdin);
    slld(n); slld(m); slld(k);
    ll l = 0, h = n*m, md, x;
    while(l+1 < h){
        x = 0;
        md = (l + h)/2;
        for(ll i = 1; i <= n; i++){   
            if(md >= i*m)
                x += m;
            else
                x = x+(md/i);
        }
        if(x >= k)
            h = md;
        else
            l = md;
    }
    cout<<h<<endl;
    return 0;
} 