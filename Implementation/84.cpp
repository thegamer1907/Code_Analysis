#include <bits/stdc++.h>

using namespace std;
int f(int n, int a, int b){
    if(a/2==b/2)
        return 1;
    else return 1+f(n/2,a/2,b/2);
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,a,b;
    cin >> n >> a >> b;
    int ans=f(n,a-1,b-1);
    int t=(1<<ans);
    if(t>=n){
        cout << "Final!";
    }
    else{
        cout << ans;
    }
}
