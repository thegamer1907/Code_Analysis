#include <bits/stdc++.h>
#define inp "inp"
#define out "out"
using namespace std;
long long  n,m,k,a[100005];
long long  ans=0; // dap an
long long  pr=0; //trang dang xet
void Input ()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    for (long long  i=1;i<=m;i++){
        cin>>a[i];
    }
}
void solve (){
    int l=1,r=1;
    int cur;
    while (l!=m+1){
        cur=(a[l] - r -1)/k+1;
        while (a[l]-r+1<=k*cur&&l<=m){
            l++;
        }
        r=l;
        ans++;
    }
    cout<<ans;
}
 main()
{
    Input();
    solve();
    return 0;
}