#include <bits/stdc++.h>

using namespace std;

const int MaxN = (1 << 13);
const int INF = 1e9;
const int MOD = 1e9 + 7;

struct T
{
    bool a[15][MaxN];
    long long len;
    string pref, suf;
    T()
    {
        memset(a, 0, sizeof(a));
    }
    T(string s)
    {
        memset(a, 0, sizeof(a));
        len = s.size();
        pref = suf = s;

        for(int len = 1; len <= 12; ++len)
        {
            int cur = 0;
            if(len > s.size())
                break;

            for(int i = 0; i < len; ++i)
                if(s[i] == '1')
                    cur += (1 << (((len - 1) - i)));
            a[len][cur] = true;

//            cout << "FOR " << s << ' ' << len << ' ' << cur << '\n';

            for(int i = len; i < s.size(); ++i)
            {
                cur <<= 1;
                cur %= (1 << len);
                if(s[i] == '1')
                    ++cur;
                a[len][cur] = true;
//                cout << "FOR " << s << ' ' << len << ' ' << cur << '\n';
            }

        }
    }
    int get()
    {
        for(int i = 12; i; --i)
        {
            bool OK = true;
            for(int j = 0; j < (1 << i); ++j)
            {
                if(!a[i][j])
                {
                    OK = false;
                    break;
                }
            }
            if(OK)
                return i;
        }
        return 0;
    }
    void norm()
    {
        while(pref.size() > 12)
            pref.pop_back();
        while(suf.size() > 12)
            suf.erase(suf.begin(), suf.begin() + 1);
    }
} a[202];

void merge(T & res, T a, T b)
{
    res.len = a.len + b.len;
    if(a.len >= 12)
        res.pref = a.pref;
    else
        res.pref = a.pref + b.pref;
    if(b.len >= 12)
        res.suf = b.suf;
    else
        res.suf = a.suf + b.suf;

    string s = a.suf + b.pref;

    for(int len = 1; len <= 12; ++len)
        for(int i = 0; i < (1 << len); ++i)
            if(a.a[len][i] || b.a[len][i])
            {
                res.a[len][i] = true;
            }

    for(int len = 1; len <= 12; ++len)
    {
        int cur = 0;
        if(len > s.size())
            break;

        for(int i = 0; i < len; ++i)
            if(s[i] == '1')
                cur += (1 << (len - 1 - i));

        res.a[len][cur] = true;

        for(int i = len; i < s.size(); ++i)
        {
            cur <<= 1;
            cur %= (1 << len);
            if(s[i] == '1')
                ++cur;
            res.a[len][cur] = true;
        }
    }

    res.norm();
}

int main()
{
//    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        a[i] = T(s);
    }
    int m;
    cin >> m;
    for(int i = 1; i <= m; ++i)
    {
        int A, B;
        cin >> A >> B;
        merge(a[n + i], a[A], a[B]);
        cout << a[n + i].get() << '\n';
    }
}
