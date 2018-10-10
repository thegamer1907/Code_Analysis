/*input
500000 500000 250000000000


*/	
// Name = Eshan Balachandar
// Handle = MisterMediocre	
// Problem Statement = ""

#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define trace1(x) cout<<#x<<": "<<x<<endl
#define trace2(x, y) cout<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z) cout<<#x<<": " <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e) cout<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
 
typedef long long ll;
 
#define PI 3.141592653589793
#define MOD 1000000007
#define INF 1e15
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; a=a%m; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }
/*prime m*/ template<typename T> T modInv(T a, T m){return pow(a,m-2,m);} 
 
//k'th largest --> k-1 lesser than or equal to it;
ll n,m,k; 
bool func(ll num){
	ll out = 0;
	for (int r=1; r<=n; r++){ //n rows
		out += min(m, num/r);
	}
	return out>=k;
	//returns true if there are atleast k numbers lesser/equal to it.
} 


int main() {
	IOS
 	cin>>n>>m>>k;

 	ll l = 1, r = n*m;
 	
 	while(l<r){
 	
 		ll mid = (l+r)/2;
 		//Find first true value
		if(func(mid)) r = mid;
		else l = mid+1; 		

 	}
 	cout<<l;
 
return 0;
}
 
