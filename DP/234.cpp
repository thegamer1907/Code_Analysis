#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a[105],b[105],ans=0;
    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >>a[i];
    }
    cin >>m;
    for(int i=0; i<m; i++)
    {
        cin >>b[i];
    }
    sort (a,a+n);
    sort (b,b+m);
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            if(max(a[i],b[j])-min(a[i],b[j])<=1)
            {
                 ans++;
                 b[j]-=100;
                 break;
            }

    }
    cout << ans << endl;
    return 0;
}
