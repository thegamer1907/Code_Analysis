// (^_^) (^_^) (^_^) (^_^)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define mp make_pair
#define vi vector<int>
#define vii vector<vi>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define fi first
#define se second
#define mod 1000000007
#define all(x) (x).begin(),(x).end()
#define tr(c,it) for(typeof((c).begin() it=(c).begin();it!=(c).end();it++)
#define pre(c,x) ((c).find(x) != (c).end())
#define cpre(c,x) (find(all(c),x) != (c).end())
#define io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
ll gcd(ll a,ll b){if(b==0)return a;else return(b,a%b);}
ll expo(ll a,ll b){ll r=1;a=a%mod;while(b){if(b%2)r=(r*a)%mod;a=(a*a)%mod;b=b/2;}
return r;}
ll calc(ll n){
	ll s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}
int main(){
	io;
	//freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=1;i<=t;i++){
		for(int j=1;j<n;j++){
			if(s[j]=='G' && s[j-1]=='B'){
				swap(s[j],s[j-1]);
				j++;
			}
		}
	}
	cout<<s;
	return 0;
}

















