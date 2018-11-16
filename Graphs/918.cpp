#include <bits/stdc++.h>

using namespace std;

#define SZ 100001
#define pb push_back
#define ff first
#define ss second

typedef long long ll;

int main()
{
    int n, t;
    cin >> n >> t;

    int next[n - 1];
    for(int i = 0; i < n - 1; i++)
        cin >> next[i];

    int pos = 0;
    bool reached = false;

    while( !reached && pos < t - 1)
    {
        pos = pos + next[pos];
        if( pos == t - 1)
            reached = true;
    }

    if( reached )
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
