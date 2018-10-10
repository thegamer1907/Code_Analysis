#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vi V(n);
    for (int i = 0; i < n; ++i) {
        cin >> V[i];
        if (i > 0) V[i] += V[i-1];
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int q;
        cin >> q;
        vi::iterator it = lower_bound(V.begin(), V.end(), q);
        cout << it - V.begin()+1 << "\n";
    }
    return 0;
}