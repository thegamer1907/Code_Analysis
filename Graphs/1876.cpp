//BerSU Ball

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m, a[123],b[123];
    cin>>n;
    for(int i = 1; i <= n; ++i) cin>>a[i];
    sort(a+1, a+n+1);
    cin>>m;
    for(int i = 1; i <= m; ++i) cin>>b[i];
    sort(b+1, b+m+1);

    int u = 1, v = 1, res = 0;
    while(u<=n && v<=m){
        if (abs(a[u]-b[v])<=1) res++, u++, v++;
        else if (a[u]<b[v]) u++;
        else v++;
    }
    cout<<res;
}
