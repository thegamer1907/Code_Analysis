#include<bits/stdc++.h>
using namespace std;

int n, a[101], ans = 0, f[3][1000];

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        f[0][i] = f[0][i-1] + ((a[i] == 0)? 1 : 0);
        f[1][i] = f[1][i-1] + a[i];
    }
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++){
            int x = f[0][j] - f[0][i-1];
            int y = f[1][j] - f[1][i-1];
            ans = max(ans, f[1][n] + x - y);
        }
    
    cout << ans;
    
}