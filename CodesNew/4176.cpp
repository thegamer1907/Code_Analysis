#include <iostream>
#include <set>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
typedef long long ll;
ll a[200005],b[200005],k[200005],c[200005];
int main(){
	int n,q;
	while(scanf("%d%d",&n,&q)!=EOF){
		int i,j;
		ll sum=0;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum+=a[i];
			b[i]=sum;
		}	
		ll ans=0;	
		for(i=0;i<q;i++){
			scanf("%lld",&k[i]);
			ans+=k[i];
			int id=lower_bound(b,b+n,ans)-b;
			//printf("id:%d\n",id);
			if(ans>=b[n-1]){
				printf("%d\n",n);
				ans=0;
			}else{
				if(b[id]>ans)
				printf("%d\n",n-id);
				else
				printf("%d\n",n-id-1);
			}
		}
	}
}