#include<iostream>
#include<cstdio>

int n,E=1;
int ex[100010],times[100010];

int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&ex[i]);
		times[i]=i+((ex[i]-i+n)/n)*n;
	}
	for (int i=1;i<=n;i++)
		if (times[i]<times[E]) E=i;
	printf("%d",E);
}