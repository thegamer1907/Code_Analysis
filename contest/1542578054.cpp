#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define FILE ""

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(FILE".in", "r", stdin);
    //freopen(FILE".out", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    vector <int> pw = {1, 2, 4, 8};
    int bi = pw[k - 1];
    /*
        if (a[0].F == 3)
        {
            cout << "YES";
            return 0;
        }
        if (a[0].F == 2)
        {
            bool f = 0;
            for (int i = 0; i < n; ++i)
            {
                if (a[i].S[0] - a[0].S[0] == -1) f = 1;
                if (a[i].S[1] - a[0].S[1] == -1) f = 1;
                if (a[i].S[2] - a[0].S[2] == -1) f = 1;
            }
            if (f)
            {
                cout << "YES";
                return 0;
            }
        }
        */
    map <int, int> mp;
    for (int i = 0; i < n; ++i)
    {
        int b = bi, c = 0;
        for (int j = 0; j < k; ++j)
        {
            int x;
            cin >> x;
            c += x * b;
            /*
            if (a[0].F == 3)
            {
            cout << "YES";
            return 0;
            }
            if (a[0].F == 2)
            {
            bool f = 0;
            for (int i = 0; i < n; ++i)
            {
                if (a[i].S[0] - a[0].S[0] == -1) f = 1;
                if (a[i].S[1] - a[0].S[1] == -1) f = 1;
                if (a[i].S[2] - a[0].S[2] == -1) f = 1;
            }
            if (f)
            {
                cout << "YES";
                return 0;
            }
            }
            */
            b /= 2;
        }
        mp[c]++;
    }
    if (mp[0])
    {
        cout << "YES";
        return 0;
    }
    /*
        if (a[0].F == 3)
        {
            cout << "YES";
            return 0;
        }
        if (a[0].F == 2)
        {
            bool f = 0;
            for (int i = 0; i < n; ++i)
            {
                if (a[i].S[0] - a[0].S[0] == -1) f = 1;
                if (a[i].S[1] - a[0].S[1] == -1) f = 1;
                if (a[i].S[2] - a[0].S[2] == -1) f = 1;
            }
            if (f)
            {
                cout << "YES";
                return 0;
            }
        }
        */
    for (int i = 1; i < 16; ++i)
    {
        for (int j = 2; j < 16; ++j)
            if (mp[i] && mp[j] && !(i & j))
            {
                cout << "YES";
                /*
                if (a[0].F == 3)
                {
                cout << "YES";
                return 0;
                }
                if (a[0].F == 2)
                {
                bool f = 0;
                for (int i = 0; i < n; ++i)
                {
                if (a[i].S[0] - a[0].S[0] == -1) f = 1;
                if (a[i].S[1] - a[0].S[1] == -1) f = 1;
                if (a[i].S[2] - a[0].S[2] == -1) f = 1;
                }
                if (f)
                {
                cout << "YES";
                return 0;
                }
                }
                */
                return 0;
            }
    }
    cout << "NO";
    return 0;
}
