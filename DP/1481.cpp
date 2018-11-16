#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

string s[1200];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n, ans = 0, l, r;
    
    cin >> n;
    
    vector<ll> a(n);
    
    for(ll i = 0; i<n; i++){
        cin >> a[i];
        
    }
    
    if(n == 1 && a[0] == 1){
        cout << 0;
        return 0;
    }
    
    for(ll i = 0; i<n; i++){
        for(ll j = i; j<n; j++){
            ll ma = 0;
            for(ll k = 0; k<n; k++){
                if(a[k] == 1 && (k < i || k > j) || a[k] == 0 && k >= i && k <= j)
                    ma++;
            }
            
            if(ma > ans)
                ans = ma;
            //cout << i << ' ' << j << ' ' << ma << endl;
        }
    }
    
    cout << ans;
}