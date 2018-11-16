#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string a, b;
    cin >> n >> a >> b;
    vi diff;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i]) diff.push_back(i);
    }
    int ans = 0;
    for (int i = 0; i < diff.size(); ++i) {
        if (i+1 < diff.size() && diff[i+1] == diff[i] + 1 && 
            a[diff[i]] != a[diff[i+1]]) {
            i++;
            ans++;
        } else ans++;
    }
    cout << ans << "\n";
    return 0;
}