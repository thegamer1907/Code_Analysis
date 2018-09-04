#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    int n,k;
    cin >> n >> k;
    int t[n];
    map <int, long long > a,b;
    for(int i = 0; i<n; i++)
    {
        cin >> t[i];
    }
    long long o = 0;
    for(int i = 0; i<n; i++)
    {
        if (t[i]%k%k==0) o += b[t[i]/k];
        if (t[i]%k==0) b[t[i]] += a[t[i]/k];
        a[t[i]]++;
    }
    cout << o;
}
