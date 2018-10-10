#include <bits/stdc++.h>

#define SQ(a) (a)*(a)

#define F0R(i, a) for(int i = 0; i < (a); i++)
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define R0F(i, a) for(int i = (a) - 1; i >= 0; i--)
#define ROF(i, a, b) for(int i = (b) - 1; i >= (a); i--)

#define ran() (rand() & 0x7FFF)
#define rand31() ((ran() << 16) | (ran() << 1) | (ran() & 1))
#define rand32() ((ran() << 17) | (ran() << 2) | (ran() & 3))
#define rand63() (((ll)ran() << 48) | ((ll)ran() << 33) | ((ll)ran() << 18) | ((ll)ran() << 3) | ((ll)ran() & 7))
#define rand64() (((ll)ran() << 49) | ((ll)ran() << 34) | ((ll)ran() << 19) | ((ll)ran() << 4) | ((ll)ran() & 15))

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define MT make_tuple
#define UB upper_bound
#define LB lower_bound
#define X real()
#define Y imag()

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef complex<ld> point;

int k;
ll pow10[16];
ll ways[11][16];

ll numLessEq(ll v, int sum, int place) {
    int placeVal = (v / pow10[place]) % 10;
    if(place == 0)
        return sum <= placeVal;
    ll res = 0;
    F0R(i, min(sum + 1, placeVal)) res += ways[sum - i][place];
    if(placeVal <= sum)
        res += numLessEq(v, sum - placeVal, place - 1);
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    pow10[0] = 1;
    FOR(i, 1, 16) pow10[i] = 10 * pow10[i - 1];
    F0R(s, 11) F0R(g, 16) {
        if(g == 0)
            ways[s][g] = (s == 0);
        else
            FOR(i, max(0, s - 9), s + 1) ways[s][g] += ways[i][g - 1];
    }
    cin >> k;
    ll lo = 0, hi = 1e15;
    while(lo < hi) {
        ll mid = (lo + hi) >> 1;
        if(numLessEq(mid, 10, 15) >= k)
            hi = mid;
        else
            lo = mid + 1;
    }
    cout << lo << endl;
    return 0;
}
