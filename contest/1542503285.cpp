#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_set>
#include<queue>
#include<cmath>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()

using namespace std;
typedef long long ll;

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    m %= 60, s %= 60;
    vector<int> a;
    for (int i = 0; i <= 60; ++i) {
        if (i % 5 == 0) {
            if (i / 5 == t1) a.pb(1);
            if (i / 5 == t2) a.pb(2);
            if (i / 5 == h) a.pb(0);
        }
        if (i == m) a.pb(3);
        if (i == s) a.pb(3);
    }
    //for (auto aa : a) cout << aa << " ";
    //cout << endl;
    int st = 0;
    while (a[st] != 1) ++st;
    if (a[st == 0 ? 4 : st - 1] == 2 || a[st == 4 ? 0 : st + 1] == 2) {
        cout << "YES";
        return 0;
    }
    /**vector<int> t;
    for (int i = st + 1; a[i % 5] != 2; ++i) {
        t.pb(a[i % 5]);
    }
    if (t == vector<int>{3, 3} || t == vector<int>{3}) {
        cout << "YES";
        return 0;
    }**/
    cout << "NO";
    return 0;
}

