#include<bits/stdc++.h>
using namespace std;
long long n,i,s,t,m,x;
int main()
{
	scanf("%lld",&n);
	for (i=1;i<=n;i++) {scanf("%lld",&x); s+=x; m=max(m,x);}
	t=s/(n-1)+(s%(n-1)>0);
	printf("%lld",max(m,t));
}