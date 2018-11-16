#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define ff first
#define se second

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair <long double, long double> pld;

int gcd(int x,int y){ if(y==0){return x;}return gcd(y,x%y);}

ll lgcd(ll x, ll y){if(y==0){return x;}return lgcd(y,x%y);}

ll pow(ll a, ll b ,ll m = mod){ll res=1;while(b>0){if(b&1)
{res=(res*a)%m;}a=(a*a)%m;b>>=1;}return res;
}

int a[30010];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,t,i;
	cin>>n>>t;
	
	for(i=1;i<n;i++)
	  cin>>a[i];
	
	i=1;  
	while(i<t){
	    i+=a[i];
	}
	
	if(i==t)
	  cout<<"YES";
	  else cout<<"NO";
	return 0;
}