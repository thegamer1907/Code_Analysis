#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int maxn = 1e6+5;
int s[maxn];
int k, n;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //read input
    cin >> k;
    string t; cin >> t;
    n = t.size();
    vector<int> pre(n);
    for (int i = 0; i < n; i++) {
        if (t[i] == '1') s[i]++;
        pre[i] += s[i];
        if (i != 0) {
            pre[i] += pre[i-1];
        }
        //cout << pre[i] << '\n';
    }
    //calc answer
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int amt = (i == 0 ? 0 : pre[i-1]);
        auto it = lower_bound(pre.begin()+i,pre.end(),k+amt);
        auto it2 = upper_bound(pre.begin()+i,pre.end(),k+amt);
        ans += (ll)(distance(it,it2));
        //cout << distance(it,it2) << '\n';
    }
    cout << ans << '\n';

    return 0;
}
	

