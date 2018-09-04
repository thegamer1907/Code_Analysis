#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<set>
#include<utility>
#include<cstring>
#include<stack>
#include<queue>
#include<map>
#include<deque>
#include<cmath>
using namespace std;

typedef pair<int, int> pii;
typedef pair<int, pii> edge;
typedef long long LL;

const int maxsz = 10001000;
int prime[maxsz];
int pref[maxsz];
int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    memset(prime, -1, sizeof(prime));
    // sieve of erathonese
    prime[0] = 0; prime[1] = 1;
    for (int i = 2; i < maxsz; i++) {
        if (prime[i] == -1) {
            for (int j = i; j < maxsz; j += i) {
                prime[j] = i;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        int x, res = 0;
        cin >> x;
        while (x != 1) {
            int cur = prime[x];
            if (cur != res) pref[cur]++;
            res = cur;
            x /= cur;
        }
    }
    for (int i = 1; i < maxsz; i++) pref[i] += pref[i - 1];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a = min(a, maxsz - 2); b = min(b, maxsz - 2);
        cout << pref[b] - pref[a - 1] << endl;
    }
}
