#include <bits/stdc++.h>
#define y0    lol
#define y1    lool
#define yn    loool
#define prev  looool
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define rep(i,a,b) for(int i = (a); i <= (b); i++)
#define rrep(i,a,b) for(int i = (b); i >= (a); i--)
#ifdef LOCAL
#define rall(x,a) for(x : a)
#else
#define rall(x,a) for(auto x : a)
#endif
#define rng(a) a.begin(), a.end()
#define PI 3.14159265358979323846
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 1111;

signed main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    bool found = false;
    vector<string> ans;
    rep(i, 1, n) {
        string s;
        cin >> s;
        if(found) {
            ans.pb(s);
        } else {
            if(s.substr(0, 2) == "OO") {
                ans.pb("++" + s.substr(2));
                found = true;
            } else if(s.substr(3, 2) == "OO") {
                ans.pb(s.substr(0, 3) + "++");
                found = true;
            } else {
                ans.pb(s);
            }
        }
    }
    if(!found) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    rall(s, ans) {
        cout << s << endl;
    }
    return 0;
}
