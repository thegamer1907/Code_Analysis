#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

#define BOOST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define FOR(a, b, c) for(int a = b; a < c; ++a)
#define PB push_back
#define MP make_pair
#define INF (int)1e9+7
#define LLINF 4e18+7
#define ALL(a) a.begin(), a.end()
#define SIZE(a) (int)a.size()

typedef long long LL;
typedef long double LD;

using namespace std;

bool check(string& s, int k)
{

    bool ones = true;
    int first = -1;
    int last = -1;
    bool d = false;

    FOR(i, 0, SIZE(s))
    {
        if(s[i] == '1')
        {
            if(first == -1)
            {
                first = i;
            }
            last = i;
        }
    }

    if(last - first < k)
    {
        return true;
    }

    first = -1;
    last = -1;

    FOR(i, 0, SIZE(s))
    {
        if(s[i] == '0')
        {
             if(first == -1)
            {
                first = i;
            }
            last = i;
        }
    }

    if(last - first < k)
    {
        return true;
    }

    return false;
}

int main()
{
    BOOST;

    int n, k;

    cin >> n >> k;

    string s;
    string x;

    cin >> s;

    x = s;

    if(check(s, k))
    {
        cout << "tokitsukaze";
        return 0;
    }
    else
    {
        FOR(i, 0, k)
        {
            s[i] = '1';
        }

        FOR(i, k, n - 1)
        {
            if(!check(s, k))
            {
                cout << "once again";
                return 0;
            }
            s[i - k] = x[i - k];
            s[i] = '1';
        }

        if(!check(s, k))
        {
            cout << "once again";
                return 0;
        }

        s = x;

        FOR(i, 0, k)
        {
            s[i] = '0';
        }

        FOR(i, k, n - 1)
        {
            if(!check(s, k))
            {
                cout << "once again";
                return 0;
            }
            s[i - k] = x[i - k];
            s[i] = '0';
        }

        if(!check(s, k))
        {
            cout << "once again";
                return 0;
        }
        else
        {
            cout << "quailty";
        }
        
    }

    return 0;
}
///