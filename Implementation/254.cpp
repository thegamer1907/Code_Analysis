#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <set>
#include <map>

using namespace std;

#define forn(n) for(int i = 0; i < (n); ++i)
#define fornm(n, m) for(int i = 0; i < (n); ++i) for(int j = 0; j < (m); ++j)

typedef long long ll;
typedef long double ld;
typedef vector<int> vint;
typedef vector<vector<int> > vvint;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;

const int MSIZE = 1e5;
const double EPS = 1e-9;
const double PI = acos(-1);
const ll INF = 1e18;

void solve(){
    int n, a, b;
    cin >> n >> a >> b;
    a--, b--;
    if (a > b)
        swap(a, b);
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        v[i] = i;
    int t = 1;
    while (v.size() != 2){
        vector<int> temp;
        for (int i = 0; i < v.size(); i += 2)
            if (v[i] == a && v[i + 1] == b){
                cout << t;
                return;
            } else {
                if (v[i] == a || v[i + 1] == a)
                    temp.push_back(a);
                else if (v[i] == b || v[i + 1] == b)
                    temp.push_back(b);
                else 
                    temp.push_back(v[i]);
            }
        t++;
        v = temp;
    }
    cout << "Final!";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
#endif
    solve();
#ifndef ONLINE_JUDGE
    cerr << fixed << setprecision(6) << (ld)clock() / CLOCKS_PER_SEC << '\n';
#endif
    return 0;
}

