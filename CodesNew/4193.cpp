#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define mp make_pair
#define pb push_back
#define sz(v) (int)v.size()
#define pii pair<int, int>

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    
    int n, q;
    cin >> n >> q;
    vector<ll> pre(n+1), a(n+1), s(q+1);
    pre[0] = 0;
    for(int j = 0; j < n; j++){
        cin >> a[j];
        pre[j] = a[j] + ((j > 0)? pre[j-1] : 0);
    }
    pre[n] = (ll)1e18;
    ll sum = 0;
    while(q--){
        ll x;
        cin >> x;
        sum += x;
        int pos = upper_bound(pre.begin(), pre.end(), sum) - pre.begin();
        if(pos == n){
            cout << n << endl;
            sum = 0;
        }else{
            cout << (n - pos) << endl;
        }
    }
    return 0;
}