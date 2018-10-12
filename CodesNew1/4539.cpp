/* Just_Do_It ___________ICARUS__________________*/
                 
#include <bits/stdc++.h>
using namespace std;
       
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,a,n) for (ll i=n-1;i>=a;i--)
#define te ll t; std::cin >> t; while(t--)
#define SZ 100001
//# define M_PIl  3.141592653589793238462643383279502884L 
/*   Proceed with CAUTION   */
	
int main(){
	fastio;
	ll n,d;
	cin>>n;
	ll a[n]; 
	rep(i,0,n) cin>>a[i];
	sort(a,a+n);
	ll ans=0,j=0;
	rep(i,0,n){
		if(2*a[j]<=a[i]) j++;
	}
	cout<<n-min(j,n/2)<<endl;
	return 0;
} 	