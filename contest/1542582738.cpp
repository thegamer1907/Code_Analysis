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

    int n,k;
    cin >> n >> k;

    vi seen(16, 0);
    rep(i,0, n) {
        int x = 0;
        rep(i, 0, k) {
            int s;
            cin >> s;
            x = (x << 1) | s;
        }
        seen[x]++;
    }

    rep(i, 0, 16)
    rep(j, 0, 16) {
        if ((seen[i] && i == 0) || (seen[i] && seen[j] && (i & j) == 0))
        {
            cout << "YES" << endl;
            return 0;
        }    
    }

    cout << "NO" << endl;
    return 0;
}