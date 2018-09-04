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

typedef pair<ll,ll> ii;
const int mx = 100100;
const int md = 1e9+7;
const double EULER = 2.71828182845904523536;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.first > b.first || (a.first == b.first && a.second < b.second);
}

bool cek(int x) {
    int ans = 0;
    while(x > 0) {
        ans += x%10;
        x /= 10;
    }
    if(ans == 10) return 1;
    return 0;
}

int main() {
    int k;
    ll ans=19,p=9;
    scd(k);
    repi(0,k-1,1) {
        p = 9;
        while(!cek(ans+p)) p += 9;
        ans += p;
    }
    printf("%I64d\n",ans);
}
