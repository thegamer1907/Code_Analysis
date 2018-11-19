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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> V(n);
    for (auto &i : V)
            cin >> i;
    bool first = false, second = false;
    for (auto i : V) {
        if (i == s) {
            cout << "YES\n";
            return 0;
        }
        if (i[0] == s[1])
            second=true;
        if (i[1] == s[0])
            first=true;
    }
    if (first && second) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
