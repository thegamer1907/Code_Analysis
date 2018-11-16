#include<cstdio>
#include<cstring>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
const int inf=0x3f3f3f3f;
const int maxn=1000000; 
int a[maxn],b[maxn],c[maxn];
int main(){
	int n,i;
	int sum1,sum2,sum3;
	scanf("%d",&n);
	sum1=0;
	sum2=0;
	sum3=0;
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		sum1+=a[i];
		sum2+=b[i];
		sum3+=c[i];
	}
	if(sum1==0&&sum2==0&&sum3==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}