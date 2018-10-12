#include <bits/stdc++.h>
#define ll long long
#include <string>
#define PI 3.14159265
using namespace std;
int main(){
    ll n,m;
    cin>>n>>m;
    ll h = m;
    ll A[n];
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    sort(A,A+n);
    ll ma = A[n-1];
    for(int i = 0; i < n && m > 0; i++){
        ll s = A[i];
        A[i] += (ma - A[i]);
        m -= (ma - s);
    }
    if(m > 0){
        ll ans = 0;
        ans = m / n;
        if(m % n != 0){
            ans++;
        }
        ans += A[n-1];
        cout<<ans<<" ";
    }else {
        cout<<A[n-1]<<" ";
    }
    cout<<ma+h;

	return 0;
}
