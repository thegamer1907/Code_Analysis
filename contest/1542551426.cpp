#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int N, K;
vector<int> arr;

struct Query {
    int l, r, p, q;
};

vector<Query> query, tmp;
vector<vector<ll> > dp;
vector<int> cnt;
int lpos, rpos;
ll cost;

void solve(int k) {
    query.push_back({0, N - 1, 0, N - 1});

    while(query.size()) {
        cnt = vector<int>(N, 0);
        lpos = rpos = cost = 0;

        tmp.clear();
        for(int i = 0; i < query.size(); i++) {
            int l = query[i].l;
            int r = query[i].r;
            int p = query[i].p;
            int q = query[i].q;

            if(l > r) continue;
            int m = (l + r)>>1;
            int a = q;
            dp[k][m] = 1e18;

            while(rpos < max(m + 1, p)) {
                cost -= 1LL * cnt[ arr[rpos] ] * (cnt[ arr[rpos] ] - 1) / 2;
                cnt[ arr[rpos] ]++;
                cost += 1LL * cnt[ arr[rpos] ] * (cnt[ arr[rpos] ] - 1) / 2;
                rpos++;
            }
            while(rpos > max(m + 1, p)) {
                rpos--;
                cost -= 1LL * cnt[ arr[rpos] ] * (cnt[ arr[rpos] ] - 1) / 2;
                cnt[ arr[rpos] ]--;
                cost += 1LL * cnt[ arr[rpos] ] * (cnt[ arr[rpos] ] - 1) / 2;
            }
            while(lpos < m) {
                cost -= 1LL * cnt[ arr[lpos] ] * (cnt[ arr[lpos] ] - 1) / 2;
                cnt[ arr[lpos] ]--;
                cost += 1LL * cnt[ arr[lpos] ] * (cnt[ arr[lpos] ] - 1) / 2;
                lpos++;
            }

            for(int i = max(m + 1, p); i <= q; i++) {
                if(dp[k][m] > dp[k - 1][i] + cost) {
                    dp[k][m] = dp[k - 1][i] + cost;
                    a = i;
                }

                cost -= 1LL * cnt[ arr[rpos] ] * (cnt[ arr[rpos] ] - 1) / 2;
                cnt[ arr[rpos] ]++;
                cost += 1LL * cnt[ arr[rpos] ] * (cnt[ arr[rpos] ] - 1) / 2;
                rpos++;
            }
            tmp.push_back({ l, m - 1, p, a });
            tmp.push_back({ m + 1, r, a, q });
        }
        query = tmp;
    }
}

int main() {
    scanf("%d %d", &N, &K);

    arr.resize(N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        arr[i]--;
    }

    dp = vector<vector<ll> >(K + 1, vector<ll>(N));

    cnt = vector<int>(N, 0);
    cost = 0;
    for(int i = N - 1; i >= 0; i--) {
        cost -= 1LL * cnt[ arr[i] ] * (cnt[ arr[i] ] - 1) / 2;
        cnt[ arr[i] ]++;
        cost += 1LL * cnt[ arr[i] ] * (cnt[ arr[i] ] - 1) / 2;
        dp[1][i] = cost;
    }
    for(int i = 2; i <= K; i++) {
        solve(i);
    }
    printf("%lld", dp[K][0]);
}
