#include <bits/stdc++.h>
#include <ostream>
using namespace std;
template <typename T> void printRange(T &x) { for (auto y : x) cout << y << ' '; cout << endl; }
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<ll> vl;
#define getNum(i) scanf("%d", &(i))
#define MOD 1000000007
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define TRACE(x) cout << #x << " = " << x << endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define reset(a) memset((a), 0, sizeof((a)))


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    IOS
    string x;
    cin >> x;
    int n;
    cin >> n;
    set<char> st, nd;
    REP(i, n) {
        string tmp;
        cin >> tmp;


        if (tmp == x) {
            cout << "YES" << endl;
            return 0;
        }

        st.insert(tmp[0]);
        nd.insert(tmp[1]);
    }

    if ((st.count(x[1]) && nd.count(x[0]))) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}