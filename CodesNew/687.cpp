#include <bits/stdc++.h>

#define int long long

using namespace std;

const int maxn = 5000+50;
int n, m, a, b, d;
map <string,int> p;
string s;

int32_t main()
{
    cin >> n >> m;
    for ( int i = 0; i < n; i++)
    {
        cin >> s;
        p[s]++;
        a++;
    }
    for ( int i = 0; i < m; i++)
    {
        cin >> s;
        p[s]++;
        if ( p[s] == 1)
            b++;
        else
        {
            a--;
            d++;
        }
    }
    if ( a+(d+1)/2 > b+d/2)
        cout << "YES";
    else
        cout << "NO";
}
