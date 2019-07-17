#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
const int maxn=1e5+5;
#define LL long long
LL a[maxn];
int n,m;
LL k;
int main(){
	//freopen("in.txt","r",stdin);
	scanf("%d%d%I64d",&n,&m,&k);
	for(int i=1;i<=m;i++)scanf("%I64d",&a[i]);
//	printf("%d\n",m);
	int tot=0;
	LL nk;
	for(int i=1;i<=m;i++){
		LL val=a[i];
		nk=((LL)(val-i+1+k-1)/k)*k+i-1;
	//	printf("%I64d\n",nk);
		int j=i; 
		for(;a[j]<=nk&&j<=m;j++);
		i=j-1;
//		printf("%d\n",i);
		tot++;
	//	return 0;
	}
	printf("%d\n",tot);
}