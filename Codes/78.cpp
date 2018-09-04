#include <bits/stdc++.h>

#define N 500009

using namespace std;

long long int pre[N];
int a[N],num[N];

int main(){
	int i,j,t1,t2,t3,t4,n;
	long long int buf1,buf2,buf3,buf4,ans=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	buf1=0;
	for(i=1;i<=n;i++){
		buf1+=a[i];
	}
	if(buf1%3){
		printf("0\n");
		return 0;
	}
	buf1/=3;
	for(i=n;i>=1;i--){
		pre[i]+=pre[i+1]+a[i];
		num[i]=num[i+1];	
		if(pre[i]==buf1){
			num[i]++;
		}
	}
	buf2=0;
	for(i=1;i<=n;i++){
		buf2+=a[i];
		if(buf2==buf1){
			ans+=num[i+2];
		}
	}
	printf("%lld\n",ans);
    return 0;
}