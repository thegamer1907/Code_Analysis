#include <iostream>
using namespace std;
int main(){
    int n, m, i;
    int a[123456], cnt[123456];
    int f[123456], l[123456];
    cin >> n >> m;
    for(i = 1; i <= n; ++i) {
        cin >> a[i];
        cnt[i] = 0;
    }
    for(i = 1; i <= m; ++i) cin >> l[i];
    f[n+1] = 0;
    for(i = n; i >= 1; --i){
        if(cnt[a[i]] == 0){
            cnt[a[i]]++;
            f[i] = f[i+1] + 1;
        }
        else f[i] = f[i+1];
    }
     for(i = 1; i <= m; ++i) cout << f[l[i]] << endl;
     return 0;
}
