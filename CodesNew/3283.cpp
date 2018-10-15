#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define INF 1e18
#define pb push_back
#define F first
#define S second
#define ll long long
#define sc(x) scanf("%lld",&x) 
int main(){
	ll n,temp;
	cin>>n;
	ll sum=0;
	ll ans=0;
	for(int i=0;i<n;i++){
		cin>>temp;
		ans=max(ans,temp);
		sum+=temp;
	}
	ans=max(ans,(sum/(n-1))+((sum%(n-1))>0));
	cout<<ans<<endl;
}