#include <bits/stdc++.h>

using namespace std;

inline int read() {
    int s = 0;
    char c;
    while ((c = getchar()) < '0' || c > '9');
    do { s = s * 10 + c - '0'; } while ((c = getchar()) >= '0' && c <= '9');
    return s;
}

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

typedef map<int, int> mi;
typedef map<string, string> ms;


#define FOR(i, a) for(int i = 0; i < (a); i++)
#define FORR(i, a, b) for(int i = a; i <= (b); i++)
#define rFOR(i, a) for(int i = (a) - 1; i >= 0; i--)
#define rFORR(i, a, b) for(int i = (b) - 1; i>= (a); i--)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define by(x) [](const auto& a, const auto& b) {return a.x > b.x}

const int MX = 100001;

bool descending(int a, int b) { return a > b; }

vector<int> fib;
int x;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    FOR(i, n) cin >> a[i];
    set<int> s;
    int suff[n + 1] = {};
    map<int, int> mp;
    rFOR(i, n) {
        suff[i] = suff[i + 1] + (mp[a[i]] != 1);
        if (mp[a[i]] != 1)
            mp[a[i]] = 1;
    }
    while (m--) {
        cin >> x;
        cout << suff[x - 1] << endl;
    }
}