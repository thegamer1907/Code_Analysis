#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
ll a[100050];
struct rang{
	ll f,l;
};
int upperbound(ll x,ll lo){
	ll hi=m;ll mid;
	ll ans=-1;
	while(lo<=hi){
		mid=(hi-lo)/2+lo;
		if(a[mid]<=x){
			ans=mid;
			lo=mid+1;
		}
		else{
			hi=mid-1;
		}
	}
	return ans;
}
/*int lowerbound(ll x,ll lo){
	ll lo=1;ll hi=n;ll mid;
	ll ans=-1;
	while(lo<=hi){
		mid=(hi-lo)/2+lo;
		if(a[mid]>=x){
			ans=mid;
			hi=mid-1;
		}
		else{
			lo=mid+1;
		}
	}
	return ans;
}*/
int main() {
	ll i,x,op;
	cin>>n>>m>>k;
	for(i=1;i<=m;i++){cin>>a[i];}
	struct rang r;
	r.f=1;
	r.l=k;
	i=1;
	op=0;
	while(i<=m){
		x=upperbound(r.l,i);
		//y=lower_bound(r.f,i);
		if(x==-1){
			r.f=r.l+1<=n?r.l+1:n;
			r.l=r.l+k<=n?r.l+k:n;
		}
		else{
			op++;
			r.l=r.l+(x-i+1);
			i=x+1;
		}
	}
	cout<<op<<endl;
	return 0;
}