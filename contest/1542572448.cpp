#include<bits/stdc++.h>
using namespace std;

constexpr int mod = 60 * 60 * 60;

int main()
{
    int t1, t2, h, m, s, ht, mt, st;
    cin >> ht >> mt >> st >> t1 >> t2;

    s = st * 60 * 60 % mod;
    m = (mt * 60 * 60 + st * 60) % mod;
    h = (ht * 60 * 60 * 5 + mt * 60 + st) % mod;

    t1 = (t1 * 60 * 60 * 5) % mod;
    t2 = (t2 * 60 * 60 * 5) % mod;

    for(int i = 1; i <= mod; ++i)
    {
        if((t1 + i) % mod == t2)
        {
            //cout << (t1 + i) << endl;
            //cout << "here" << endl;
            cout << "YES" << endl, exit(0);
        }
        if((t1 + i) % mod == h || (t1 + i) % mod == m || (t1 + i) % mod == s) break;
    }
    for(int i = 1; i <= mod; ++i)
    {
        if((t2 + i) % mod == t1)
        {
            //cout << (t1 + i) << endl;
            //cout << "here" << endl;
            cout << "YES" << endl, exit(0);
        }
        if((t2 + i) % mod == h || (t2 + i) % mod == m || (t2 + i) % mod == s) break;
    }
    cout << "NO" << endl;
}

