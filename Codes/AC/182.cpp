#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define FILE "turtle"

const ll MOD = (ll)1e9 + 7;
const long double EPS = 1e-9;

int main() {
    srand(time(0));
    ios_base::sync_with_stdio(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(FILE".in", "r", stdin);
    //freopen(FILE".out", "w", stdout);
#endif // LOCAL
    int n , s = 0;
    cin >> n;
    vector < int > v(n);
    for (int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        s += x;
        v[i] = s;
    }
    int m;
    cin >> m;
    for (int i = 0 ; i < m ; i++){
        int x;
        cin >> x;
        int p = lower_bound(v.begin() , v.end() , x) - v.begin();
        cout << p + 1 << endl;
    }
    return 0;
}
