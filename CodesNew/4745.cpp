#include <bits/stdc++.h>
using namespace std;
int n,a[500005];
int main(){
iostream::sync_with_stdio(0);
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a+1,a+n+1);
    int now = n/2+1;
    int ans = n;
    for(int i=n;i>n/2;i--){
        while(now > 1){
            now--;
            if (a[i] >= 2 * a[now]) {ans--;break;}
        }
    }
    cout << ans;
}