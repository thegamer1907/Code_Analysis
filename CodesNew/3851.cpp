#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

inline ll read(){
	char ch=getchar();ll x=0,f=1;
    while(ch<'0' || ch>'9') {
       if(ch=='-') f=-1;
	  	  ch=getchar();
	}
    while(ch<='9' && ch>='0') {
	   x=x*10+ch-'0';
	   ch=getchar();
	}
    return x*f;
}


ll a[101010];

ll n,sum=0;

bool check(ll x){
	for(int i=1;i<=n;i++){
		if(x<a[i]) return 0;
	}
	return (n-1)*x>=sum;
}

int main(){
	n=read();
	ll l=0,r=2e9+7;
	for(int i=1;i<=n;i++){
		a[i]=read();
		sum+=a[i]; 
	}
	while(l<=r){
		ll mid=l+r>>1;
		if(check(mid)){
			r=mid-1;
		}
		else l=mid+1;
	}
	cout<<l;
	return 0;
}

