#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int n,x,a[100010],id;
int main()
{
	scanf("%d",&n);a[id]=0x7fffffff;
	for (int i=1;i<=n;++i){
		scanf("%d",&x);
		int y=max(x-i+1,0);
		a[i]=y?(y-1)/n+1:0;
		a[i]=a[i]*n+i-1;
		if (a[i]<a[id]) id=i;
	}
	printf("%d\n",id);
	return 0;
}