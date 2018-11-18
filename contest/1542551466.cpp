#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <cmath>
#include <memory.h>
#include <functional>
#include <random>
#include <ctime>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<ll> vl;
typedef vector<int> vi;

int N, K;

struct SUB {
    vl arr, cnt;
    ll tot = 0;
    int x, y;
    void init (int N) {
        x = 1, y = 0;
        arr = cnt = vl(N+2, 0);
    }
    void add(int idx) {
        tot += cnt[arr[idx]];
        cnt[arr[idx]]++;
    }
    void del(int idx) {
        tot -= cnt[arr[idx]]-1;
        cnt[arr[idx]]--;
    }
    ll get(int nx, int ny) {
        while(x < nx) del(x), x++;
        while(x > nx) --x, add(x);
        while(y < ny) ++y, add(y);
        while(y > ny) del(y), y--;
        return tot;
    }
} sub;

vector<vl> dp;
void run(int k, int s, int e, int p, int q) {
    if(s>e) return;
    int m = (s+e)/2, opt = p;
    ll& ret = dp[k][m];
    ret = 1e18;
    for(int i=p;i<=q && i < m;i++) {
        if (ret > sub.get(i+1, m) + dp[k-1][i]) {
            ret = sub.get(i+1, m) + dp[k-1][i];
            opt = i;
        }
    }
    run(k, s, m-1, p, opt);
    run(k, m+1, e, opt, q);
}

int main () {
    cin >> N >> K;
    
    sub.init(N);
    for(int i=1;i<=N;i++) cin >> sub.arr[i];

    dp = vector<vl> (K+1, vl(N+1, 0));
    for(int i=1;i<=N;i++) dp[0][i] = sub.get(1, i);
    
    for(int i=1;i<=K-1;i++) run(i, 1, N, 1, N);
    cout << dp[K-1][N];
    
    return 0;
}








