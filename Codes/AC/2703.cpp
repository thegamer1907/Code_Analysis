#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

vi zalgorithm(string s) {
    vi z(s.size());
    int l = 0, r = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (r < i) {
            for (int j = i; j < s.size(); ++j) {
                if (s[j] != s[j-i]) break;
                z[i]++;
            }
            l = i, r = i + z[i] - 1;
        } else {
            if (z[i-l] + i <= r) {
                z[i] = z[i-l];
            } else {
                z[i] = r-i+1;
                for (int j = r+1; j < s.size(); ++j) {
                    if (s[j] != s[j-i]) break;
                    z[i]++;
                }
                l = i, r = i + z[i] - 1;
            }
        }
    }
    return z;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vi z = zalgorithm(s);
    int mx = 0;
    for (int i = 1; i < z.size(); ++i) {
        if (z[i] > 0) {
            if (z[i] + i == z.size()) mx = max(mx, z[i]-1);
            else mx = max(mx, z[i]);
        }
    }
    int ans = 0;
    for (int i = 1; i < z.size(); ++i) {
        if (z[i] + i == z.size() && mx >= z[i]) ans = max(ans, z[i]);
    }
    if (ans == 0) cout << "Just a legend\n";
    else cout << s.substr(0, ans) << "\n";
    return 0;
}
