#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(nullptr)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define REP(n) FOR(O, 1, (n))
#define pb push_back
#define INF 1000000000000000000
#define PI 3.14159265358979323846
#define f first
#define s second
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ld, ld> pld;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef vector<piii> viii;

const int MAXN = 100100;
ll n, k;
int m;
queue<ll> q;

int main()
{
    FAST_IO;

    cin >> n >> m >> k;
    REP(m) {
        ll pi; cin >> pi;
        q.push(pi);
    }

    ll cnt = 0, block = 0, ans = 0;
    while (!q.empty()) {
        //block = min((q.front()/k), block);
        //block += (q.front()-k-block*k)/k;

        block = (q.front()-cnt-1)/k;

        ll from = block*k;
        ll to = from+k+cnt;

        /*if (to < q.front()) {
            for (int i = 60; i >= 0; i--) {
                if (to+(1<<i)*k < q.front()) {
                    block+= k;
                    to += (1<<i)*k;
                }
            }
        }
        block++;
        to += k;*/

        //cout << " " << idFrom << " " << idTo-1 << endl;

        int rem = 0;
        while (!q.empty()) {
            ll num = q.front();
            if (num > to) break;
            rem++;
            q.pop();
        }

        cnt += rem;
        /*if (rem <= 0) block++;
        else ans++;*/
        if (rem > 0) ans++;
    }

    cout << ans;

    return 0;
}