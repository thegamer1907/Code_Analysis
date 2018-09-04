/*input
C
100 100 100
1 1 1
1000000000000

*/	
// Name = Eshan Balachandar
// Handle = MisterMediocre	
// Problem Statement = "http://codeforces.com/problemset/problem/371/C"

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
 
ll rb,rc,rs; //Required b,c,s for a hamburger
ll nb,nc,ns;
ll pb,pc,ps;
ll money; 

bool check(ll n){
	ll b = rb*n, c = rc*n, s = rs*n;
	b-=nb; c -= nc; s-=ns;
	ll cost = 0;
	if(b>0) cost+=b*pb;
	if(c>0) cost+=c*pc;
	if(s>0) cost+=s*ps;
	if(cost>money) return false;
	else return true;
}



int main() {
	IOS
 	string input; cin>>input;
 	
 	for(int i=0; i<input.length(); i++){
 		if(input[i]=='C') rc++;
 		else if(input[i]=='B') rb++;
 		else rs++;
 	}
 	cin>>nb>>ns>>nc;
 	cin>>pb>>ps>>pc;
 	cin>>money;


 	ll l=0, r = 10000000000005;
 	while(l<r){
 		ll m = (l+r+1)/2;
 		if(check(m)) l=m;
 		else r = m-1;
 		//trace3(l,m,r);
 	}
 	cout<<l<<endl;

return 0;
}
 
