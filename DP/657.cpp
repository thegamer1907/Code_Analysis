#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;
    str = ' ' + str;
    int n = str.length();
    int pre[n + 5];
    memset(pre, 0, sizeof(pre));
    for (int i = 1; i <= n - 1; ++i) {
    	if (str[i] == str[i + 1]) {
    		pre[i] = pre[i - 1] + 1;
    	}
    	else pre[i] = pre[i - 1];
    }
    int q, l, r;
    cin >> q;
    while (q--) {
    	cin >> l >> r;
    	cout << pre[r - 1] - pre[l - 1] << "\n";
    }
    
    return 0;
}