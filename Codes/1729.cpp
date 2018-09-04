#include <bits/stdc++.h>
using namespace std;
#define loop(i,a,b) for(ll i=a;i<=b;i++)
#define mod 1000000007
#define  F first
#define  S second
#define mp make_pair
#define pb push_back
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
typedef long long int  ll;
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef pair <long long int, long long int> pll;
const int inf = INT_MAX;
const long long int infl = LLONG_MAX;

int main(){
	fast_io;
	ll n,m,k;
	cin>>n>>m>>k;
	if(n==1 || m==1){
		cout<<k<<endl;
		return 0;
	}
	ll count=0,start=1,end=n*m,mid,z;
	while(start<end){
		mid=(start+end)/2;
		count=0;
		for(int i=1;i<=n;i++){
			z=(mid-1)/i;
			z=min(z,m);
			count+=z;
		}
		if(count>=k){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		// cout<<start<<" "<<end<<endl;
	}
	count=0;
	for(int i=1;i<=n;i++){
		z=(start-1)/i;
		z=min(z,m);
		count+=z;
	}
	if(count>=k){
		start--;
	}
	cout<<start<<endl;
	return 0;
}