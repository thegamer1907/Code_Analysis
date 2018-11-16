#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
#include<unordered_map>
#include<cassert>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define sz(x) (int)(x.size())
#define pii pair <int, int>
#define X first
#define Y second
#define pb push_back


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a>> b;
    int cnt = 0;
    vector <int> t;
    for (int i=1; i <= n; ++i)
        t.pb(i);
    while (1) {
        ++cnt;
        vector <int> np;
        for (int i = 0; i < sz(t); i += 2) {
            int ta = t[i];
            int tb = t[i + 1];
            if ((ta == a && tb == b ) || (ta == b && tb == a)) {
                if (sz(t) == 2)
                    cout << "Final!";
                else
                    cout << cnt;
                return 0;
            }
            if (ta == a || ta == b)
                np.pb(ta);
            else
                np.pb(tb);
        }
        t = np;
    }
    return 0;
}
