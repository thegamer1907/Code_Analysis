#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;

const int maxn=1e5+10;
ll b[maxn],p[maxn];

int cmp(ll a,ll b){
	return a<b;
}

int main(){
	int n;ll s;
	scanf("%d %lld",&n,&s);
	for(int i=1;i<=n;i++){
		scanf("%lld",&b[i]);
	}
	ll min=b[1]+1;
	for(int i=2;i<=n;i++){
		  p[i]=b[i]+i;
		  if(p[i]<min)
		    min=p[i];
	}		  
	if(min>s){
		printf("0 0\n");
		return 0;
	}
	ll l=0,r=n,mid;
	ll sum;
	ll ans_sum=0,ans_num=1;
	while(l<=r){
		mid=(l+r)/2;
		for(int i=1;i<=n;i++)
		  p[i]=b[i]+i*mid;
		sort(p+1,p+n+1,cmp);
		sum=0;
		for(int i=1;i<=mid;i++)
			sum+=p[i];
		if(sum<=s){
			ans_sum=max(sum,ans_sum);
			ans_num=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	//	printf("mid:%d l:%d r:%d\n",mid,l,r);
	}
	printf("%lld %lld\n",ans_num,ans_sum);
	return 0;
}