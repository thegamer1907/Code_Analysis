#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, t, a[100001], c[100001], ans = 0;


int main(){
    cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> a[i];
    c[1] = a[1]; 
    for (int i = 2; i <= n; i++) c[i] = a[i] + c[i-1];
    if (c[n] <= t) cout << n;
    else{
        for (int i = 1; i <= n; i++){ 
            int x = upper_bound(c+1, c+n+1, c[i-1] + t) - c - 1;
            if (x == n+1){
                if ((x-i) > ans) ans = x - i;
                break;
            }
            else if ((x-i+1) > ans) ans = x - i + 1;
        }
        cout << ans;
    }
    
}