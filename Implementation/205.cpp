#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define F first
#define S second
#define ld long double

using namespace std;

inline void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    if(a > b)
    {
        swap(a, b);
    }
    vector<int> all;
    for(int i = 1; i <= n; i++)
    {
        all.pb(i);
    }
    int now = 0;
    while(all.size() > 2)
    {
        now++;
        vector<int> tmp;
        for(int i = 0; i < all.size(); i += 2)
        {

            if(all[i] == a && all[i + 1] == b)
            {
                cout << now;
                return;
            }
            if(all[i] == a)
            {
                tmp.pb(a);
            }
            else if(all[i] == b)
            {
                tmp.pb(b);
            }
            else
            {
                tmp.pb(all[i + 1]);
            }
        }
        all = tmp;
    }
    cout << "Final!";
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
