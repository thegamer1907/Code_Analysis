#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
#define ll long long
ll n;
ll ans;
bool check(ll x){
	ll tmp=n;
	ll a,b;
	a=b=0;
	while(tmp){
		if(tmp>=x){
			a+=x;
			tmp-=x;
		}else{
			a+=tmp;
			tmp=0;
			break;
		}
		ll y=tmp/10;
		b+=y;
		tmp-=y;
	}
	if(a>=b) return 1;
	return 0;
}

int main(){
	cin>>n;
	ll L=1,R=n;
	while(L<=R){
		ll mid=(L+R)>>1;
		//cout<<mid<<endl;
		if(check(mid)){
			R=mid-1;
			ans=mid;
		}else{
			L=mid+1;
		}
	}
	cout<<ans;
}