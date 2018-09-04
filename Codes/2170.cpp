#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define pb push_back
#define mp(x,y) make_pair(x,y)
#define scd(n) scanf("%d",&n)
#define sclf(n) scanf("%lf",&n)
#define scl(n) scanf("%I64d",&n)
#define repi(a,b,c) for(int i=a;i<b;i+=c)
#define repis(a,b,c) for(int i=a-1;i>=b;i-=c)
#define repj(a,b,c) for(int j=a;j<b;j+=c)
#define repjs(a,b,c) for(int j=a-1;j>=b;j-=c)
#define repk(a,b,c) for(int k=a;k<b;k+=c)
#define repks(a,b,c) for(int k=a-1;k>=0;k-=c)
#define fi first
#define se second

/*
 fast I/O

ios::sync_with_stdio(0);
cin.tie();

 freeopen

 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 */

typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int mx = 200100;
const int md = 1000000007;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.se > b.se;
}

bool depan(const pair<int,int>& a,const pair <int,int>& b) {
    return a.fi > b.fi;
}

int main() {
    int n,c,d;
    ll arr[mx],a=0,b=0,ans=0;
    scd(n);
    c = 0;
    d = n-1;
    repi(0,n,1) scanf("%I64d",&arr[i]);
    while(c <= d) {
        if(a <= b) {
            a += arr[c];
            c++;
        }
        else {
            b += arr[d];
            d--;
        }
        //cout << a << " " << b << endl;
        if(a == b) ans = max(ans,a);
    }
    cout << ans << endl;
}
