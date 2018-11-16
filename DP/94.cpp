#include <bits/stdc++.h>
#define ll long long
#define sf scanf
#define pf printf

using namespace std;

int main()
{
    int n,m,cnt=0,mx=0,i;
    sf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        sf("%d",&a[i]);
    }
    sf("%d",&m);
    int b[m];
    for(i=0;i<m;i++){
        sf("%d",&b[i]);
    }
    sort(a,a+n);
    sort(b,b+m);
    mx = min(n,m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (abs(a[i] - b[j]) ==1 || a[i]-b[j]==0)
            {
                b[j] = 500;
                cnt++;
                break;
            }
    pf("%d\n",cnt);
    return 0;
}
