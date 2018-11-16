#include <bits/stdc++.h>

using namespace std;
int a[105], b[105];
int main()
{
    int n, m, sc=0, p=1;
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    cin >> m;
    for(int i=1; i<=m; i++) cin >> b[i];
    sort(b+1,b+m+1);
    for(int i=1; i<=n; i++)
        for(int j=p; j<=m; j++)
            if(abs(a[i]-b[j])<=1){sc++; swap(b[p],b[j]); p++; break;}
            cout<<sc;
    return 0;
}
