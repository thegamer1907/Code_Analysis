#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;
#define x first
#define y second
void fastInOut();
const double EPS = 1e-4;
const int MOD = 1e9 + 7;
const int N = 1e5 + 5;

ll n, m, k;
ll P[N];

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    fastInOut();
    cin >> n >> m >> k;
    for(int i=0; i<m; ++i)
        cin >> P[i];
    ll i = 0, page = (P[0]-1) / k;
    ll steps = 1, offset = 0, curroffset = 0;
    while(i<m) {
        if((P[i]-offset-1) / k == page) {
            curroffset++;
            i++;
        }
        else {
            offset += curroffset;
            curroffset = 0;
            steps++;
            page = (P[i]-offset-1) / k;
        }
    }
    cout << steps << '\n';
    return 0;
}

void fastInOut() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
}