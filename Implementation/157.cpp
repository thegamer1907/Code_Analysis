#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define fir first
#define sec second
#define ld long double

const ll inf = 1e18;
const ll maxn = 1e5 + 1;

int main()
{
    ios_base::sync_with_stdio(0);
//    cin.tie(0), cout.tie(0);
    ll n, m, k, ans = 1, a, b;
    string s;
    vector<int> v, v1;
    cin >> n >> a >> b;
    for(int i = 0; i < n; ++i)
    {
        v.pb(i + 1);
    }
    while(v.size() != 2)
    {
        bool tf = 0;
        for(int i = 0; i < v.size(); i+=2)
        {
            if(v[i] == b)
            {
                if(v[i+1] == a)
                {
                    tf = 1;
                    break;
                }
                else
                {
                    v1.pb(v[i]);
                }
                continue;
            }
            if(v[i] == a)
            {
                if(v[i+1] == b)
                {
                    tf = 1;
                    break;
                }
                else
                {
                    v1.pb(v[i]);
                }
                continue;
            }
            if(v[i+1] == a)
            {
                if(v[i] == b)
                {
                    tf = 1;
                    break;
                }
                else
                {
                    v1.pb(v[i+1]);
                }
                continue;
            }
            if(v[i+1] == b)
            {
                if(v[i] == a)
                {
                    tf = 1;
                    break;
                }
                else
                {
                    v1.pb(v[i+1]);
                }
                continue;
            }
            v1.pb(v[i]);
        }
        if(tf) break;
        v = v1;
        v1.clear();
        ans++;
    }
    if(v.size() == 2)
        cout << "Final!";
    else
    cout << ans;
    return 0;
}
