#include <bits/stdc++.h>
#define fore(x,a,b) for(int x=a, qwerty=b; x<qwerty; x++)
#define ALL(a) (a).begin(),(a).end()
#define SZ(a) ((int)(a).size())
#define pb push_back
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fst first
#define snd second
#define mset(a,v) memset((a),(v),sizeof(a))
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int lcm(int a, int b) { return a* (b / gcd(a,b)); }

const int N=1005;

int doit(ll n){
	if(n==1)return -1;
	ll r=n;
	if(n&(1LL))r=-r;
	return r+doit(n-1);
}

int main(){FIN;
	ll n;cin>>n;
	//fore(i,1,n)cout<<i<<" : "<<doit(i)<<"\n";
	if(n%2)n++,n=-n;
	cout<<n/2<<"\n";
}