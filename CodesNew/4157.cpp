#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

#define pb push_back
#define ll long long

const int maxn=2e5+7;

int n;
int a[maxn];
ll suf[maxn];

void build(){
	for(int i=n; i>=1; i--)
		suf[i]=suf[i+1]+a[i];
}

ll sum(){
	return suf[1];
}

ll qry(int l){
	return suf[l];
}

int bs(ll hp){
	int l=1, r=n;
	int jump;
	for(jump=1; l+jump*2<=r; jump*=2);
	for(; jump>0; jump/=2){
		if(l+jump>r)	continue;
		ll ans=qry(l+jump);
		if(ans<hp)	r=l+jump-1;
		if(ans==hp) return n-(l+jump)+1;
		if(ans>hp)	l=l+jump;
	}
	if(l>r)	return -1;
	if(l==r) return n-l+1;
	return -1;
}

int main(){
	int q;
	cin>>n>>q;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	build();
	ll hp=sum();
	for(int qi=1; qi<=q; qi++){
		ll k;
		cin>>k;
		hp-=k;
		if(hp<=0)
			hp=sum();
		printf("%d\n",bs(hp));
		//cerr<<"hp: "<<hp<<endl;
	}
	return 0;
}