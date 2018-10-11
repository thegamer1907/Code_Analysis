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
#define EPSILON 0.0000000001

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
const int mx = 100100;
const int md = 1000000007;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.se < b.se;
}

int main() {
    vector < pii > arr;
    int n,x;
    scd(n);
    repi(0,n,1) {
        scd(x);
        x -= i;
        if(x > 0) {
            if(x%n) x = x/n+1;
            else x /= n;
        }
        else x = 0;
        arr.pb(mp(x,i+1));
    }
    sort(arr.begin(),arr.end());
    cout << arr[0].se << endl;
}
