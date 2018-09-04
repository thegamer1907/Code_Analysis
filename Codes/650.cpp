#include<bits/stdc++.h>
#define ll long long
#define N 50005
#define rep(i,j,k) for (ll i=j;i<=k;++i)
#define per(i,j,k) for (ll i=j;i>=k;--i)
using namespace std;
inline ll read(){
	char ch=getchar(); ll x=0,f=1;
	while (ch<'0'||ch>'9') { if (ch=='-') f=-1; ch=getchar(); }
	while (ch>='0'&&ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	return x*f;
}
ll k,tot;
int main(){
	k=read();
	rep(i,1,30000000){
		ll tmp=i,num=0;
		while (tmp){
			num+=tmp%10;
			tmp/=10;
			if (num>10) break;
		}
		if (num==10) ++tot;
		if (tot==k){
			printf("%lld",i);
			exit(0);
		}
	}
}
