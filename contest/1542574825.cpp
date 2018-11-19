#include <bits/stdc++.h>
#define sqr(x) ((x)*(x))

using namespace std;
typedef long long ll;
const int inf = (int)1e9 + 7;
const ll linf = (ll)1e18 + 7;
const int mod = (int)1e9 + 7;
const int maxn = (int)1e5;


int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> a(n);
    bool ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == s)
            ans = 1;
        a.push_back(a[i]);
    }
    for (int i = 0; i < a.size(); ++i)
        for (int j = i + 1; j < a.size(); ++j) {
            if (a[i][1] == s[0] && a[j][0] == s[1])
                ans = 1;
            if (a[i][0] == s[1] && a[j][1] == s[0])
                ans = 1;
        }
    if (ans)
        cout << "YES";
    else cout << "NO";
    return 0;
}