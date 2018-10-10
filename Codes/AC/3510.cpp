#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
bool jg(ll k){
	ll p,num1=0,num2=0,tmp=n;
	while(tmp){
		if(tmp<=k){
			num1+=tmp;
			tmp=0;
		}else{
			num1+=k;
			tmp-=k;
			p=tmp/10;
			tmp-=p;
			num2+=p;
		}
	}
	if(num1>=num2) return true;
	return false;
}
int main(){
	scanf("%lld",&n);
	ll mid,l=1,r=n;
	while(l<r){
		mid=(l+r)/2;
		if(jg(mid)){
			r=mid;
		}else{
			l=mid+1;
		}
	}
	printf("%lld\n",r);
}