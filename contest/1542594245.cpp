#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <set>
#include <map>
#include <cassert>
#include <deque>
#include <numeric>

using namespace std;

//#define int long long
#define len(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define x first
#define y second
#define mp(a, b) make_pair(a, b)

typedef long double ld;

const int INF = 1e9;
const ld eps = 1e-9;

template <typename T1, typename T2>
bool cmin(T1 &a, const T2 &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template <typename T1, typename T2>
bool cmax(T1 &a, const T2 &b) {
    if (b > a) {
        a = b;
        return true;
    }
    return false;
}

signed main() {
    
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    bool first = false, second = false;
    vector<string> sts;
    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        sts.push_back(t);
    }

    for (int i = 0; i < n; i++) {
        sts.push_back(sts[i]);
    }
    
    for (auto t : sts) {
        if (t == s) {
            cout << "YES";
            exit(0);
        }
        if (second && t[0] == s[1]) {
            cout << "YES";
            exit(0);
        }
        if (first && t[1] == s[0]) {
            cout << "YES";
            exit(0);
        }
        first |= t[0] == s[1];
        second |= t[1] == s[0];
    }
    
    cout << "NO";
    
    
}
