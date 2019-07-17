#include<iostream>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
ll a[maxn];
int main(){
	ll n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=1;i<=m;i++) scanf("%lld",&a[i]);
	a[m+1]=n+k;
	int i=1,ans=0;
	while (i<=m){
		int tmp=0;
		while ((a[i]-i)/k==(a[i+tmp]-i)/k) tmp++;
		i+=tmp;
		ans++;  
	}   
	printf("%d\n",ans);
	
	return 0;
 }