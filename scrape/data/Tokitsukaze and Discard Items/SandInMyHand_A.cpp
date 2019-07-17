#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
int main()
{
	scanf("%lld %lld %lld",&n,&m,&k);
	ll res=0;
	vector<ll> arr,a;
	ll x;
	for(ll i=0;i<m;i++){
		scanf("%lld",&x);
		arr.emplace_back(x);
	}
	ll p=arr[0]/k;
	if(arr[0]%k!=0)p++;
	p*=k;
	ll i=0;
	ll j=0;
	ll len=arr.size();
	ll end=arr[len-1];
	while(i<len){
		j=0;
		while(i<len&&arr[i]<=p&&j<k){
			i++;
			j++;
		}
		if(!j){
//			p+=k;
			ll t=(arr[i]-p)/k;
			if((arr[i]-p)%k!=0)t++;
			p=p+t*k;
		}
		else{
			p+=j;
			res++;
		}
	}
	printf("%lld",res);
	return 0;
}