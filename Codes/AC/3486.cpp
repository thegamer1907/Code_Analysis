#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL n;

bool check(LL x){
	LL sum=0,tmp=n;
	while(tmp){
		if(tmp>=x)tmp-=x;else break;
		sum+=tmp/10;tmp-=tmp/10;
	}
	return (sum<=n/2);
}

int main(){
	scanf("%I64d",&n);
	LL L=1,R=n/2+(n%2==1),ans=R;
	while(L<=R){
		LL mid=(L+R)>>1;
		if(check(mid))ans=mid,R=mid-1;
		else L=mid+1;
	}	
	printf("%I64d\n",ans);return 0;
}
