#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define N 300001
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int n,k,a[N],s,l,r=1,ans,L,R;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	  scanf("%d",&a[i]),a[i]^=1;
	while(++l<=n)
	  {
	  while(r<=n && s+a[r]<=k)s+=a[r++];
	  if(r-l>ans)ans=r-l,R=r,L=l;
	  s-=a[l];
	  }
	printf("%d\n",ans);
	for(int i=1;i<=n;i++)
	  printf("%d%c",(L<=i && i<R)?1:a[i]^1,i==n?'\n':' ');
	return 0;
}
