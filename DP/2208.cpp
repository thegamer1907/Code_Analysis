#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    set<int> s;
    int v[n], dp[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = n - 1; i >= 0; i--)
    {
        s.insert(v[i]);
        dp[i] = s.size();
    }
    for(int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        l--;
        cout << dp[l] << endl;
    }
}