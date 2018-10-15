#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

vector <ll> v;

int main()
{

        int k;
        ll res = 0;
        string s;
        cin >> k >> s;

        int len = s.length(), cnt = 1;
        for (int i = 0; i < len; ++i) {
                if (s[i] == '0')
                        ++cnt;
                else {
                        v.push_back(cnt);
                        cnt = 1;
                }
        }
        v.push_back(cnt);

        if (k == 0) {
                for (ll x: v)
                        res += x*(x - 1)/2;

                cout << res;
                return 0;
        }

        for (int l = 0, r = k; r < v.size(); ++l, ++r)
                res += v[l]*v[r];
        
        cout << res;

}