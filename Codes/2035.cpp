#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int MXN=2e5+1;
map<ll,ll> l, h;
ll k, ans = 0;
ll A[MXN];
int main(){
    int N; cin >> N >> k;
    for(int x=0; x<N; x++)cin >> A[x], h[A[x]]++;
    for(int x=0; x<N; x++){
        h[A[x]]--;
        if(A[x]%k==0 && h.count(A[x]*k) && l.count(A[x]/k))
            ans += h[A[x]*k] * l[A[x]/k];
        l[A[x]]++;
    }
    cout << ans << "\n";
}
