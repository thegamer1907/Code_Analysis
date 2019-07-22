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

set <int> ones;
set <int> zeros;

bool check(string& s, int k)
{
    if(SIZE(ones))
    {
        int first = *ones.begin();
        int last = *(--ones.end());

        if(last - first < k)
        {
            return true;
        }
    }
    else
    {
        return true;
    }

    if(SIZE(zeros))
    {
        int first = *zeros.begin();
        int last = *(--zeros.end());

        if(last - first < k)
        {
            return true;
        }
    }
    else
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

    FOR(i, 0, n)
    {
        if(s[i] == '1')
        {
            ones.insert(i);
        }
        else
        {
            zeros.insert(i);
        }
    }

    if(check(s, k))
    {
        cout << "tokitsukaze";
        return 0;
    }
    else
    {
        FOR(i, 0, k)
        {
            ones.insert(i);
            zeros.erase(i);
        }

        FOR(i, k, n - 1)
        {
            if(!check(s, k))
            {
                cout << "once again";
                return 0;
            }

            if(x[i - k] == '1')
            {
                ones.insert(i - k);
                zeros.erase(i - k);
            }
            else
            {
                ones.erase(i - k);
                zeros.insert(i - k);
            }
            
            zeros.erase(i);
            ones.insert(i);
        }

        if(!check(s, k))
        {
            cout << "once again";
                return 0;
        }

        zeros.clear();
        ones.clear();

        FOR(i, 0, n)
        {
            if(s[i] == '1')
            {
                ones.insert(i);
            }
            else
            {
                zeros.insert(i);
            }
        }

        FOR(i, 0, k)
        {
            zeros.insert(i);
            ones.erase(i);
        }

        FOR(i, k, n - 1)
        {
            if(!check(s, k))
            {
                cout << "once again";
                return 0;
            }
            
            if(x[i - k] == '1')
            {
                ones.insert(i - k);
                zeros.erase(i - k);
            }
            else
            {
                ones.erase(i - k);
                zeros.insert(i - k);
            }
            
            zeros.insert(i);
            ones.erase(i);
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