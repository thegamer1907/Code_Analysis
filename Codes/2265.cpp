#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long Long;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef pair<ii, ii> iiii;

int di[] = {0 , 0 , 1 , -1 , 1 , 1 , -1 , -1};
int dj[] = {1 ,-1 , 0 , 0 , -1 , 1 ,  1 , -1};


const double PI = acos(-1.0), EPS = 1e-9;
const int N = 10000007, M = 1003, mod = 1000000007;
vector<bool> isPrime(N);
int cum[N], sp[N];
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
#endif
    //ios::sync_with_stdio(false), cin.tie(0), cout.tie(0), cout.precision(7), cout << fixed;

    fill(isPrime.begin(), isPrime.end(), 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 0; i * i < N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < N; j += i) {
                isPrime[j] = 0;
                if (sp[j] == 0)
                    sp[j] = i;
            }
        }
    }

    int n;
    scanf("%d", &n);
    int x;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        int prev = -1;
        while(sp[x]) {
            if (sp[x] != prev) {
                ++cum[sp[x]];
                prev = sp[x];
            }
            x /= sp[x];
        }
        if (x != prev)
            ++cum[x];
    }
    for (int i = 1; i < N; ++i)
        cum[i] += cum[i - 1];
    int q;
    scanf("%d", &q);
    int l, r;
    while (q--) {
        scanf("%d %d", &l, &r);
        if (l >= N)
            puts("0");
        else
            printf("%d\n", cum[min(r, N - 1)] - cum[l - 1]);
    }

    return 0;
}