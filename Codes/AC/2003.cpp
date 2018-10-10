#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;


map < ll , ll > l , r ;
int main()
{
    ios::sync_with_stdio(false);

    int n ;
    ll k ;
    cin >> n >> k ;
    vector < ll > v;
    for(int i = 0 ; i < n ; i++){
        ll x ; cin >> x ;
        v.push_back(x);
        r[x]++ ;
    }
    ll res = 0 ;
    for(int i = 0 ; i < n  ; i++){
            r[v[i]]-- ;
            if(v[i] % k){
               l[v[i]]++ ;
               continue ;
            }
            ll le = l[v[i] / k] ;
            ll re = r[v[i] * k] ;
            res += le * re ;
            l[v[i]]++ ;
    }

    cout << res << endl;






    return 0;
}
