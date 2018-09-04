#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;

const int N = 8;
vec<int> ans(N);
vec<string> lst;
void rec(int i, int sum) {
    if (i == N) { return; }

    if (i) {
        string s = "";
        s.pb(sum + '0');
        for (int k = i - 1; k >= 0; k--) { s.pb(ans[k] + '0'); }
        reverse(s.begin(), s.end());
        lst.pb(s);
    }
    for (int k = (i == 0 ? 1 : 0); k <= min(9, sum); k++) {
        ans[i] = k;
        rec(i + 1, sum - k);
        ans[i] = 0;
    }
}

bool cmp(string a, string b) {
    if (a.length() != b.length()) { return a.length() < b.length(); }
    return a < b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    rec(0, 10);
    sort(lst.begin(), lst.end(), cmp);

    int n;
    cin >> n;
    cout << lst[n - 1] << '\n';

    return 0;
}
