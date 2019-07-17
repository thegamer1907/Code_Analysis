#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+10;
ll a[maxn];
int main(){
	ll n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=1;i<=m;i++) scanf("%lld",&a[i]);
	ll tmp=0;int ans=0,i=1;
	while (i<=m){
		int kk=0;
		if (a[i]<=tmp){
			while (a[i]<=tmp){
				kk++;i++;
			}
			tmp+=kk;
		}
		else{
			int xx=(a[i]-tmp)/k*k;
			tmp+=xx;
			if (tmp<a[i]) tmp+=k;
			while (a[i]<=tmp && i<=m){
				kk++;i++;
			}
			tmp+=kk; 
		}
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}