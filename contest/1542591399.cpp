#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define _abs(x)((x) < 0 ? (x) * -1 : (x))
#define _max(x, y)(max(0, max((x), (y))))
#define _min(x, y)(max(0, min((x), (y))))

#define pb push_back
#define mp make_pair

static const ll MOD = 1e9 + 7;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //freopen("debug.txt", "w", stderr);

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    string pass;

    cin >> pass;
    cin >> n;

    string str;
    bool pre = false;
    bool post = false;

    int i;

    for (i = 0; i < n; i++) {
        cin >> str;

        if (str[0] == pass[0] && str[1] == pass[1]) pre = post = true;
        if (str[1] == pass[0]) pre = true;
        if (str[0] == pass[1]) post = true;
    }

    if (pre && post) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}
