#include<cstdio>
#include<algorithm>
#include<cctype>
#include<cstring>
#include<iostream>
#include<cmath>
#define LL long long
#define INF (2139062143)
#define N (100005)
using namespace std;
int n,maxx,sum;
int a[N];
template <typename T> void read(T&t) {
	t=0;
	bool fl=true;
	char p=getchar();
	while (!isdigit(p)) {
		if (p=='-') fl=false;
		p=getchar();
	}
	do {
		(t*=10)+=p-48;p=getchar();
	}while (isdigit(p));
	if (!fl) t=-t;
}
int main(){
	read(n);
	for (int i=1;i<=n;i++) read(a[i]),maxx=max(a[i],maxx),sum+=a[i];
	printf("%d",maxx*n-sum);
	return 0;
}
