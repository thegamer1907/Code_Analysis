#include<bits/stdc++.h>
using namespace std;
#define N 200001
#define LL long long
LL n,ans,d[N];
int main()
{
	scanf("%I64d",&n);
	for(LL i=1;i<=n;i++)
	  scanf("%I64d",&d[i]);
	LL l=0,r=n+1,sl=0,sr=0;
	while(l<=r)
	  {
	  while(sl<=sr)sl+=d[++l];
	  while(sr<sl)sr+=d[--r];
	  while(sl<sr)sl+=d[++l];
	  if(l<r && sl==sr)ans=sl;
	  }
	printf("%I64d\n",ans);
}