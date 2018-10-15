#include <bits/stdc++.h>

using namespace std;
int n,m,a[109],maxx,sum;
int main()
{
    cin >>n>>m;
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        maxx=max(maxx,a[i]);
    }
    int res2=maxx+m;
    int i=0;
    while ((m>0)&&(i<=n-1))
    {
        while (a[i]<maxx)
        {
            a[i]++;
            m--;
        }
        i++;
    }
    i=0;
    while (m>0)
    {
        a[i]++;
        m--;
        maxx = a[0];
        if (i==n-1)
        {
            i=0;
            continue;
        }
        i++;
    }
    cout << maxx << ' ' << res2;
    return 0;
}
