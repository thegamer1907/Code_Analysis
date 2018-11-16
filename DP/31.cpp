#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],b[101],n,m;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    cin >> m;
    for(int j=1; j<=m; j++) cin >> b[j];
    for(int i=1; i<=n; i++) sort(a+1,a+1+n);
    for(int j=1; j<=m; j++) sort(b+1,b+1+m);
    int res=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
                b[j]=1000;
                res++;
                break;
            }
        }
    }
    cout << res;
}
