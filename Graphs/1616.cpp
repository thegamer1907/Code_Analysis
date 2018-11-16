#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops,Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")

using namespace std;

typedef long long ll;

ll a[100099];

int main(){
    ll n, t, k = 1;
    
    cin >> n >> t;
    
    if(t == 1){
        cout <<"YES";
        return 0;
    }
    
    for(ll i = 1; i<n; i++){
        cin >> a[i];
    }
    
    k = k + a[k];
    
    while(k != t && k < n){
        //cout << k << endl;
        k = k + a[k];
    }
    
    if(k == t){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}