#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string s1;
    cin >> s1;
    int n = s1.size();
    long long nb = 0, nc = 0, ns = 0;
    for(int i = 0; i<n; i++)
    {
        if (s1[i]=='B') nb++;
        else if (s1[i]=='C') nc++;
        else ns++;
    }
    long long b,c,s;
    cin >> b >> s >> c;
    long long mb, mc, ms;
    cin >> mb >> ms >> mc;
    long long m;
    cin >> m;
    long long l = 1, r = 1e13, ans = 0;
    while (l<=r)
    {
        long long x;
        x = (l+r)/2;
        long long k = nb*x, l1 = nc*x, j = ns*x;
        long long t = 0;
        if ((k-b)*mb>0) t += (k-b)*mb;
        if ((l1-c)*mc>0) t += (l1-c)*mc;
        if ((j-s)*ms>0) t += (j-s)*ms;
        if (t<=m)
        {
            ans = x;
            l = x+1;
        }
        else r = x-1;
    }
    cout << ans;
}
