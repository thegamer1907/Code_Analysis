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
const double EULER = 2.71828182845904523536;

bool compare(const pair<int,int>& a,const pair <int,int>& b) {
    return a.first < b.first || (a.first == b.first && a.second > b.second);
}

ll dp[500100] = {},tot=0;
map < ll,ll > visited;

int main() {
    int n;
    scd(n);
    repi(1,n+1,1) {
        scl(dp[i]);
        dp[i] += dp[i-1];
    }
    repi(1,n+1,1) {
        if(i >= 2 and i<= n-1 and dp[i]%2 == 0 and dp[i]/2 == dp[n]-dp[i]) tot += visited[dp[i]/2];
        visited[dp[i]]++;
    }
    cout << tot << endl;
}
