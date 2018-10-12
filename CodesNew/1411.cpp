#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<string>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
#define LL long long
#define mod 1000000007
char str[100005];
int A, B, C, a, b, c, pa, pb, pc;
LL Jud(LL x)
{
	LL ans;
	ans = max(A*x-a, 0ll)*pa+max(B*x-b, 0ll)*pb+max(C*x-c, 0ll)*pc;
	return ans;
}
int main(void)
{
	int i;
	LL l, r, m, R;
	scanf("%s%d%d%d%d%d%d%lld", str+1, &a, &b, &c, &pa, &pb, &pc, &R);
	for(i=1;str[i]!=0;i++)
	{
		if(str[i]=='B')  A++;
		if(str[i]=='S')  B++;
		if(str[i]=='C')  C++;
	}
	l = 0, r = 1e13;
	while(l<r)
	{
		m = (l+r+1)/2;
		if(Jud(m)<=R)
			l = m;
		else
			r = m-1;
	}
	printf("%lld\n", r);
	return 0;
}