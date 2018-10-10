#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(false);
  //  freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<ll, int> > sum1(1), sum2(1);
    sum2[0].second = n;
    sum1[0].second = -1;
    for (int i = 0; i < n-1; i++) {
        sum1.push_back({(sum1.back().first+a[i]), i});
    }
    for (int i = n-1; i > 0; i--) {
        sum2.push_back({(sum2.back().first+a[i]), i});
    }
    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if (sum1[i].first == sum2[n-i].first) {
            ans = max(ans, sum1[i].first);
        }
    }
    int i1 = 0, i2 = 0;
    ll s1 = 0, s2 = 0;
    while(true) {
        if (sum1[i1].second < sum2[i2].second) {
            if (s1 == s2) {
                ans = max(ans, s1);
                s1 = sum1[i1].first;
                i1++;
            }
            else if (s1 < s2) {
                s1 = sum1[i1].first;
                i1++;
            }
            else {
                s2 = sum2[i2].first;
                i2++;
            }
            if (s1 == s2) {
                ans = max(ans, s1);
            }
        }
        else {
            break;
        }
    }
    cout << ans;
    return 0;
}
