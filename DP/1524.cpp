#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int count(string s, char x)
{
    ll ans = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == x)
            ans++;
    return ans;
}
int max(vector<ll>a)
{
    ll max = -1;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ll kol = 0;
            for (int z = 0; z <= n - 1; z++) {
                if (z < i || z > j) {
                    if (a[z] == 1) {
                        kol++;
                    }
                } else {
                    if(a[z] != 1)
                        kol++;
                }
            }
            ans = max(ans, kol);
        }
    }
    cout << ans;
}