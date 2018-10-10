#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int n;
map< ll , ll > A , B;
ll a[1000001];
ll res[1000001];
int main(){
             
              ll r;
             scanf("%d%lld",&n,&r);
             for(int i = 1 ; i <= n ; ++i ){
             	 ll x;
             	 scanf("%lld",&x);
             	 a[i] = x;
             }

             ll ans = 0;
             for(int i = 1 ; i <= n;  ++i ){
             	 ll x  = a[i];
             	 res[i] = A[x];
             	 A[x * r]++;
             }

             for(int i = 1 ; i <= n ; ++i ){
             	ll x = a[i];
             	ans += B[x];
             	B[x * r] += res[i];
             }

             cout << ans << endl;






}