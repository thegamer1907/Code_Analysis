#include <bits/stdc++.h>
#define rep(i, a, b) for(long long i=(a) ; i<=(b) ; ++i)
#define mp make_pair
#define pii pair<long long, long long>
#define PB push_back
#define F first
#define S second
#define Task ""
using namespace std;
const long long N=100005;
long long m, a[N];
long long n, k;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen(Task".inp", "r", stdin);
    //freopen(Task".out", "w", stdout);
    cin >> n >> m >> k;
    rep(i, 1, m) cin >> a[i];

    long long prv=0, del=0, ptr=1, ans=0, delold=0;
    while(ptr<=m) {
        long long mod=(a[ptr]-delold)%k;
        if(mod==0) mod+=k;
        if(mod>prv) {
            long long newGroup=(a[ptr]-del-1)/k+1;
            prv=0;
            for(; ptr<=m ; ++ptr) {
                long long group=(a[ptr]-del-1)/k+1;
                if(group!=newGroup) break;
                ++prv;
            }
            ++ans; delold=del; del+=prv;
        } else {
            long long cnt=0;
            for(; ptr<=m ; ++ptr) {
                long long mod=(a[ptr]-delold)%k;
                if(mod==0) mod+=k;
                if(mod>prv) break;
                ++cnt;
                if(cnt==k) break;
            }
            ++ans;
            prv=cnt; delold=del; del+=prv;
        }
    }
    cout << ans;
    return 0;
}