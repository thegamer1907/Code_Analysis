#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int inf = (int)1e9 + 7;
const int N = (int)1e7 + 7;

#define fr first
#define sc second
#define OK puts("OK");
#define pb push_back
#define mk make_pair

int cnt[N];
int f[N];
ll pre[N];

vector < char > prime(N, 1);

int main () {
        int n; scanf ("%d", &n);
        for (int i = 0; i < n; i++) {
                int a; scanf ("%d", &a);
                cnt[a]++;
        }
        prime[0] = prime[1] = 0;
        f[2] += cnt[2];
        for (int i = 3; i <= N; i += 2) {
                if (prime[i]) {
                        f[i] += cnt[i];
                        if (i * 1LL * 2 <= N) {
                                for (int j = i * 2; j <= N; j += i) {
                                        prime[j] = 0;
                                        f[i] += cnt[j];
                                }
                        }
                }
                prime[i + 1] = 0;
                f[2] += cnt[i + 1];
        }
        for (int i = 1; i <= N; i++) {
                pre[i] += pre[i - 1] + f[i];
        }
        int m; scanf ("%d", &m);
        while (m--) {
                int l, r; scanf ("%d %d", &l, &r);
                r = min(r, N - 7);
                if (r < l) {
                        cout << 0 << endl;
                        continue;
                }
                cout << pre[r] - pre[l - 1] << endl;
        }
}
