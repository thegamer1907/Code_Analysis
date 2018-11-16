/*
Submitted With (^^) by -> Hossam ^_^
_____________________
|     ___     ___     |
|    (^_^)   (^_^)    |
|   /( | )\_/( | )\   |
|_____|_|_____|_|_____|
*/

#include <bits/stdc++.h>

using namespace std;

inline void prep()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
};

#define X first
#define Y second
#define ll long long
#define inf (0x7fffffffffffffff)
#define all(x) x.begin(), x.end()
#define debug(x) cerr << #x << " = " << (x) << " ";
#define ZXC cerr << clock() * 1.0 / CLOCKS_PER_SEC << endl;

// const int mod = (int)1e9 + 7;
const int mod = 998244353;
const int MX = (int)5e5 + 20;

int main()
{
    prep();

    srand(time(0));

    int n, m;
    cin >> n >> m;

    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    vector<bool> vis(MX, false);
    vector<int> cnt(n + 1, 0);
    for(int i = n - 1; i >= 0; --i){
        cnt[i] = cnt[i + 1] + !vis[a[i]];
        vis[a[i]] = true;
    }

    while(m--){
        int l;
        cin >> l;
        cout << cnt[--l] << "\n";
    }

    // ZXC
    return 0;
}