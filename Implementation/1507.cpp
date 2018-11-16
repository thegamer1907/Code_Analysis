#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)n; i++)
#define sz(n) (int)n.size()

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cout.precision(10);
    cout << fixed;
    cin.tie(0);

    string s;
    cin >> s;
    int ans =0, k =0;
    char c =s[0];
    rep(i, sz(s))
    {
        if(s[i]==c)k++;
        else{
            ans = max(ans, k);
            k=1;
            c =s[i];
        }
    }
    if(max(ans, k) > 6) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
