#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 1e5+10;

long long F[maxn][30];
int cnt[maxn], n, k, a[maxn];

long long calc(int l, int r) {
    long long ans = 0;
    memset(cnt, 0, sizeof(cnt));
    for(int i = l; i <= r; i++) {
        ans += cnt[a[i]]++;
    }
    return ans;
}
long long r = 0, l = 1, ret = 0;
long long query(int ql, int qr){
    while (r < qr){
        ++r;
        ret += 1ll * cnt[a[r]];
        ++cnt[a[r]];
    }
 
    while (r > qr){
        --cnt[a[r]];
        ret -= 1ll * cnt[a[r]];
        --r;
    }
 
    while (l > ql){
        --l;
        ret += 1ll * cnt[a[l]];
        ++cnt[a[l]];
    }
 
    while (l < ql){
        --cnt[a[l]];
        ret -= 1ll * cnt[a[l]];
        ++l;
    }
 
    return ret;
}

void solve(int j, int l, int r, int st, int ed){
    if(l > r) return;
    int mid = (l+r)/2;
    int x;
    // cout<< st<< " "<< mid<< endl;
    // long long cost = calc(st, mid);
    for(int i = st; i <= min(mid, ed); i++) {
        // cout<< cost<< " --- "<< calc(i, mid)<< endl;
        long long cost = query(i, mid);
        if(F[mid][j] > F[i-1][j-1] + cost) {
            F[mid][j] = F[i-1][j-1] + cost;
            x = i;
        }
        // cost -= --cnt[a[i]];
        
    }
    // getchar();
    if(l != r) {
        solve(j, l, mid-1, st, x);
        solve(j, mid+1, r, x, ed);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n>> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    // for(int i = 1; i <= n; i++) F[i][1] = calc(1, i);
    // for(int i = 1; i <= n; i++) cout<< F[i][1]<< " "; cout<< endl;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= k; j++) 
            F[i][j] = INT64_MAX;

    memset(cnt, 0, sizeof(cnt));
    F[0][1] = 0;
    for(int i = 1; i <= n; i++) {
        F[i][1] = F[i-1][1] + (cnt[a[i]]++);
    }
    memset(cnt, 0, sizeof(cnt));
    // for(int i = 1; i <= n; i++) cout<< F[i][1]<< " "; cout<< endl;
    
    // for(int i = 1; i <= n; i++) cout<< F[i][1]<< " "; cout<< endl;
    for(int i = 2; i <= k; i++) solve(i, 1, n, 1, n);
    cout<< F[n][k] << endl;
}