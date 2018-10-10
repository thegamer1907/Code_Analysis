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

int main() {
    int n,m,x,dp[mx] = {},q;
    vector < vector <int> > arr;
    vector <int> temp;
    scanf("%d %d",&n,&m);
    repi(0,n,1) {
        temp.clear();
        dp[i] = 1;
        repj(0,m,1) {
            scd(x);
            temp.pb(x);
        }
        arr.pb(temp);
    }
    repj(0,m,1) {
        int p = 1;
        repi(1,n,1) {
            if(arr[i][j] >= arr[i-1][j]) {
                p++;
                dp[i] = max(dp[i],p);
            }
            else p = 1;
        }
    }
    scd(q);
    while(q--) {
        int a,b;
        scanf("%d %d",&a,&b);
        if(b-a+1 <= dp[b-1]) printf("Yes\n");
        else printf("No\n");
    }
}
