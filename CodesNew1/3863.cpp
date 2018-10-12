#include<bits/stdc++.h>
#define maxn 100005
using namespace std;
typedef long long ll;
ll a[maxn],sum=0,maxx=0;
ll n;
void init(){
	scanf("%lld",&n);
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]),sum+=a[i],maxx=max(maxx,a[i]);
	n--;
	ll cnt=sum/n;
	if(sum%n!=0) cnt++;
	printf("%lld",max(cnt,maxx));
}
int main(){
	init();
	
	return 0;
} 