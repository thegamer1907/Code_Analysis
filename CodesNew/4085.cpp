#include<bits/stdc++.h>
using namespace std;
#define MAXN 200005
#define LL long long
LL sum[MAXN];
int a[MAXN];
int n,q;
//k hurts
int getans(LL k)
{
	int mid;
	int f=0,r=n+1;
	while(r-f>1){
		mid=(f+r)>>1;
		if(sum[mid]>k)
			r=mid;
		else
			f=mid;
	}
	return f;
}
int main()
{
	int i,j;
	LL k;
	scanf("%d%d",&n,&q);
	for(i=1;i<=n;i++){
		scanf("%d",a+i);
		sum[i]=sum[i-1]+a[i];
	}
	sum[n+1]=(LL)2e15;


	LL nk;
	k=0;
	for(i=1;i<=q;i++){
		scanf("%I64d",&nk);
		k+=nk;
		j=getans(k);
		if(j==n){
			k=0;
			j=0;
		}
		printf("%d\n",n-j);
	}
	return 0;
}
