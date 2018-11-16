#include<cstdio>
#include<algorithm>
#include<cctype>
#include<cstring>
#include<iostream>
#include<cmath>
#define LL long long
#define N (100005)
using namespace std;
int n;
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
int t,B,sum;
int tot[2];
int q[N];
int main(){
	read(n); read(B);
	for (int i=1;i<=n;i++) read(a[i]);
	for (int i=1;i<n;i++){
		tot[a[i]%2]++;
		if (tot[0]==tot[1]) q[++t]=abs(a[i+1]-a[i]);
	}
	sort(q+1,q+t+1);
	if (t==0){
		puts("0");
		return 0;
	}
	q[++t]=2e9;
	for (int i=1;i<=t;i++){
		sum+=q[i];
		if (sum>B){
			printf("%d\n",i-1);
			return 0;
		}
	}
	return 0;
}
