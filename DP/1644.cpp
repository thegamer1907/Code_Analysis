#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define rep(i,a,b) for(int i = (a); i <= (b); i++)
#define rrep(i,a,b) for(int i = (b); i >= (a); i--)
#ifdef LOCAL
#define rall(x,a) for(x : a)
#define LL "%lld"
#else
#define rall(x,a) for(auto x : a)
#define LL "%I64d"
#define y0    oooo
#define y1    ooox
#define yn    ooxo
#define prev  ooxx
#define next  oxoo
#define read  oxox
#define tm    oxxo
#endif
#define rng(a) a.begin(), a.end()
#define PI 3.14159265358979323846
#define MOD 100000000
#define endl "\n"
typedef long long ll;
using namespace std;

const int N = 111111;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int pa = s.find("AB"), pb = s.rfind("BA");
    if(pa == string::npos || pb == string::npos) {
        cout << "NO" << endl;
        return 0;
    }
    if(pa + 1 >= pb && pa <= pb + 1) {
        pa = s.find("BA"), pb = s.rfind("AB");
        if(pa + 1 >= pb && pa <= pb + 1) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
