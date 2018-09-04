#include <bits/stdc++.h>
#define MP make_pair
#define PB push_back
using namespace std;
typedef long long ll;
template<typename T>
inline T read(T&x){
	x=0;int f=0;char ch=getchar();
	while (ch<'0'||ch>'9') f|=(ch=='-'),ch=getchar();
	while (ch>='0'&&ch<='9') x=x*10+ch-'0',ch=getchar();
	return x=f?-x:x; 
}
const int N=10000+10;
ll n,l,r,k;
bool ok(ll x){
	ll tmp=n;
	ll a=0,b=0;
	while (tmp){
		if (tmp<=x){
			a+=tmp;
			tmp=0;
		}
		else a+=x,tmp-=x;
		b+=tmp/10;
		tmp-=tmp/10;
	}
	return a>=(n+1)/2;
}
int main(){
	// for (n=1;n<=100;n++){
	read(n);
	l=1,r=n,k=-1;
	while (l<=r){
		ll mid=l+((r-l)>>1);
		if (ok(mid)){
			k=mid;
			r=mid-1;
		}
		else l=mid+1;
	}
	printf("%lld\n",k);
	// }
	return 0;
}