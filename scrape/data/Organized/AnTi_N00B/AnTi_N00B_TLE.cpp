#include <bits/stdc++.h>
#define in(x) freopen(x,"r",stdin)
#define out(x) freopen(x,"w",stdout)
#define N 1005000
#define oo ll(1e16)
#define P pair<int,int>
#define PP pair<int,pair<int,int> >
#define F first
#define S second
#define pb push_back
#define el endl
using namespace std;
typedef long long ll;
typedef long double ld;
ll n,m,k,p,cur,ans,del[N];
int main() {
    #ifndef _LOCAL
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #else
        in("input.txt");
    #endif

    cin>>n>>m>>k;
    for(int i=0;i<m;i++) cin>>del[i];
    p=0; cur=1;
    for(;p<m;) {
        int fx=p;
        for(;del[p]-p>cur*k;cur++);
        for(;p<m && del[p]-fx<=cur*k;)
            p++;
        ans++;
    }
    cout<<ans;
}