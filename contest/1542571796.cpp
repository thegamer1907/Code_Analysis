#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i=0;i<(int)(n);i++)
#define si(c) ((int)(c).size())
#define forsn(i,s,n) for(int i = (int)(s); i<((int)n); i++)
#define dforsn(i,s,n) for(int i = (int)(n)-1; i>=((int)s); i--)
#define all(c) (c).begin(), (c).end()
#define D(a) cerr << #a << "=" << a << endl;
#define pb push_back
#define eb emplace_back
#define mp make_pair

typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n,k; cin >> n >> k;
    int ALL = 0;
    forn(i,n) {
        int mask = 0;
        forn(i,k) {
            int d; cin >> d;
            mask = 2*mask + d;
        }
        ALL |= 1<<mask;
    }

    bool ok = 0;
    for (int s = ALL; s > 0; s = (s-1)&ALL) {
        vi cnt(4);
        forn(i,16) if (s & (1<<i)) {
            forn(j,k) {
                if (i & (1<<j)) cnt[j]--;
                else cnt[j]++;
            }
        }
        bool good = 1;
        for (auto x : cnt) good &= x >= 0;
        ok |= good;
    }
    cout << (ok ? "YES" : "NO") << endl;

    return 0;
}
