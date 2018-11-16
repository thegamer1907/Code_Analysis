#include <bits/stdc++.h>

#define f first
#define s second
#define pb push_back
#define all(a) a.begin(), a.end()
#define IO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

template<typename T1, typename T2> inline void chkmin(T1 & x, T2 y) {if (x > y) x  = y;}
template<typename T1, typename T2> inline void chkmax(T1 & x, T2 y) {if (x < y) x  = y;}
template<typename T1> inline void die(T1 x) {cout << x; exit(0);}

int main() {
	//freopen("input.txt", "r", stdin);
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> cur;
    for (int i = 1; i <= n; ++i) {
        cur.pb(i);
    }
    int round = 1;
    while (cur.size() > 2) {
        vector<int> to;
        for (int j = 0; j < cur.size(); j += 2) {
            if ((cur[j] == a && cur[j + 1] == b) || (cur[j] == b && cur[j + 1] == a)) {
                cout << round;
                return 0;
            }
            if (cur[j] == a || cur[j + 1] == a)
                to.pb(a);
            else {
                if (cur[j] == b || cur[j + 1] == b)
                    to.pb(b);
                else
                    to.pb(cur[j]);
            }
        }
        ++round;
        cur = to;
    }
    cout << "Final!";
	return 0;
}
