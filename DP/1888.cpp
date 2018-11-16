#include "bits/stdc++.h"

using namespace std;

#define FI             freopen("in.txt", "r", stdin)
#define FAST           ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll             long long

inline int read()      { int a; scanf("%d", &a); return a; }
inline ll readLL()     { ll a; scanf("%lld", &a); return a; }

static const int maxn = 1e6 + 5;

string s;

int main()
{
    //FI;
    FAST;

    cin >> s;
    int cnt = 0;
    int len = s.size();
    int i = 0;
    for (i = 0; i < len-1; i++)
    {
        if (s[i] == 'A' && s[i+1] == 'B')
        {
            for (int j = i+2; j < len-1; j++)
            {
                if (s[j] == 'B' && s[j+1] == 'A')
                {
                    cout << "YES\n";
                    return 0;
                }
            }
            break;
        }
    }
    for (i = 0; i < len-1; i++)
    {
        if (s[i] == 'B' && s[i+1] == 'A')
        {
            for (int j = i+2; j < len-1; j++)
            {
                if (s[j] == 'A' && s[j+1] == 'B')
                {
                    cout << "YES\n";
                    return 0;
                }
            }
            break;
        }
    }
    cout << "NO";
}
