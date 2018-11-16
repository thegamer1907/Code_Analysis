#include <bits/stdc++.h>
using namespace std;

const int Max = 100010;
int a[Max];
int dp[Max];
set<int> s;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i=0  ;  i<n  ;  i++)
        cin >> a[i];

    for (int i=n-1  ;  i>=0  ;  i--)
    {
        dp[i] = dp[i+1];
        if ( s.find(a[i]) == s.end() )
        {
            dp[i]++;
            s.insert(a[i]);
        }
    }

    for (int i=0,l  ;  i<m  ;  i++)
    {
        cin >> l;
        cout /*<< " -> " */<< dp[l-1] << endl;
    }
}
