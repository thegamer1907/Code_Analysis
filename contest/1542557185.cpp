#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int N, K;
vector<int> arr;
vector<int> cnt;
ll cost;

ll dp[22][100010];

struct Query {
    int l, r, a, b;
};
vector<Query> query, tmp;

void solve(int k) {
    query.clear();
    query.push_back({0, N - 1, 0, N - 1});

    while(query.size()) {
        tmp.clear();
        int cl = 0, cr = 0;
        cnt = vector<int>(N, 0);
        cost = 0;
        cnt[ arr[0] ]++;

        for(int n = 0; n < query.size(); n++) {
            int l = query[n].l;
            int r = query[n].r;
            int a = query[n].a;
            int b = query[n].b;
            if(l > r) continue;

            int m = (l + r)>>1;
            int p = b;
            dp[k][m] = 1e18;

            while(max(m + 1, a) <= cr) {
                cnt[ arr[cr] ]--;
                cost -= cnt[ arr[cr] ];
                cr--;
            }
            while(cr < max(m + 1, a) - 1) {
                cr++;
                cost += cnt[ arr[cr] ];
                cnt[ arr[cr] ]++;
            }
            while(cl < m) {
                cnt[ arr[cl] ]--;
                cost -= cnt[ arr[cl] ];
                cl++;
            }
            for(int i = max(m + 1, a); i <= b; i++) {
                if(dp[k][m] > dp[k - 1][i] + cost) {
                    dp[k][m] = dp[k - 1][i] + cost;
                    p = i;
                }
                cr++;
                cost += cnt[ arr[cr] ];
                cnt[ arr[cr] ]++;
            }

            tmp.push_back({l, m - 1, a, p});
            tmp.push_back({m + 1, r, p, b});
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

    cnt = vector<int>(N, 0);
    cost = 0;
    for(int i = N - 1; i >= 0; i--) {
        cost += cnt[ arr[i] ];
        cnt[ arr[i] ]++;
        dp[1][i] = cost;
    }
    for(int k = 2; k <= K; k++) solve(k);

    printf("%lld", dp[K][0]);
}
