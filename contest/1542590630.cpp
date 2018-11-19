#include <bits/stdc++.h>

using namespace std;

#define rep(x,s,e) for(int x=(int)s;x<(int)e;x++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string p;
    cin >> p;

    int n;
    cin >> n;

    vector<string> in(n);
    rep(i, 0, n) {
        cin >> in[i];
    }

    rep(i, 0, n) {
    rep(j, 0, n) {
        if (in[i] == p || (in[i][1] == p[0] && in[j][0] == p[1])) {
            cout << "YES" << endl;
            return 0;
        }
    }
    }

    cout << "NO" << endl;

    return 0;
}