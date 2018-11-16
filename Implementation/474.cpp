#include <iostream>
#include <algorithm>

using namespace std;

#define maxn 105

int main(){
    int n, k, a[maxn];
    int ans = 0, ans0 = 0, ans1 = 1;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] != 0) ans++;
    }

    for(int i = k - 1; i <= n; i++){
        if((a[i] == a[i+1]) && a[i] != 0) ans0++;
        else break;
    }

    if(ans == 0) cout << 0 << endl;
    else if(ans0 != 0) cout << ans0 + k << endl;
    else if(ans >= k) cout << k << endl;
    else cout << ans << endl;

    return 0;
}

