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
const int mx = 200100;
const int md = 1000000007;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.first < b.first || (a.first == b.first && a.second > b.second);
}

ll n,m,k;

ll can(ll x) {
    ll temp = 0;
    repi(1,n+1,1) {
        temp += min(m,x/i);
    }
    return temp;
}

ll bs(ll k) {
    ll a=1,b=n*m,mid;
    while(a < b) {
        mid = (a+b)/2;
        ll temp = can(mid);
        if(temp < k) a = mid+1;
        else b = mid;
    }
    return a;
}

int main() {
    scanf("%I64d %I64d %I64d",&n,&m,&k);
    cout << bs(k) << "\n";
}
