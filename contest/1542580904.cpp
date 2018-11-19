#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    #ifdef DEBUG
        freopen("C:/Users/villebon/Desktop/input.txt","r",stdin);
	#else
		ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
    #endif
    int n, k;
    cin >> n >> k;
    vector<int> V(16,0);
    for (int i=0; i<n; ++i) {
        int cur=0;
        for (int j=0; j<k; ++j) {
            int a;
            cin >> a;
            cur += (1<<j)*a;
        }
        V[cur]++;
    }
    int mx=(1<<k);
    for (int cur=0; cur<mx; ++cur) {
        if (!V[cur])
            continue;
        int op = cur^(mx-1);
        for (int test=0; test<mx; ++test) {
            //cout << cur << " -> " <<op << " " << test << " " << V[test] << endl;
            if ((op|test)==op && V[test] > 0) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}
