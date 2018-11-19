#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define size(s) (ll)(s).size()

const ll MAXN = 1e6 + 1;
const ll INF = 1e9;

void bye() {
    cout << '\n';
    exit(0);
}

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool f, f1;
    f = f1 = 0;
    for (int i = 0; i < n; i++) {
    	string tmp;
    	cin >> tmp;
    	if (tmp == s) {
    		cout << "YES";
    		bye();
    	}
    	if (tmp[0] == s[1]) {
    		f = 1;
    	}
    	if (tmp[1] == s[0]) {
    		f1 = 1;
    	}
    }
    if (f && f1) {
    	cout << "YES";
    } else {
    	cout << "NO";
    }
    bye();
}