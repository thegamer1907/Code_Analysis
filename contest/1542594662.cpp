#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define pb push_back
#define sz(a) (int)(a).size()
#define rep(i, a, b) for (int i = (a), _b = (b); i < _b; ++i)
#define frep(i, a, b) for (int i = (a), _b = (int)(b); i <= _b; ++i)

typedef complex<ld> cplex;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;

const int inf = 1000000007;
const int N = 1000000 + 7;
const int multipleTest = 0;

string x, s[N];
int n;

void solve() {
    cin >> x;
    cin >> n;
    rep(i, 0, n) cin >> s[i];
    
    rep(i, 0, n) {
        if (s[i] == x) {
            puts("YES");
            return;
        }
        rep(j, 0, n) {
            if (s[i].back() == x[0] && s[j][0] == x[1]) {
                puts("YES");
                return;
            }
        }
    }
    puts("NO");
}

int main() {
#ifdef _LOCAL_
    freopen("in.txt", "r", stdin);
    //    freopen("out.txt", "w", stdout);
#endif
    int Test = 1;
    if (multipleTest) {
        cin >> Test;
    }
    for(int i = 0; i < Test; ++i) {
        solve();
    }
#ifdef _LOCAL_
    cout<<"\n" << 1.0 * clock() / CLOCKS_PER_SEC <<endl;
#endif
}
