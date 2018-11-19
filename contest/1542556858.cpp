#include<bits/stdc++.h>
using namespace std;
int f[101],n,k,flag,i,j,x;
int main()
{
  	scanf("%d%d",&n,&k);
  	for (i=1;i<=n;i++)
  	{
    	int cnt=0;
      	for (j=1;j<=k;j++){scanf("%d",&x);cnt+=(1<<j-1)*x;}f[cnt]=1;
    }
  	flag=0;
  	for (i=0;i<16;i++)
    for (j=0;j<16;j++)
    if ((i&j)==0&&f[i]&&f[j]) flag=1;
 	if (flag) printf("YES\n");else printf("NO\n");
 	return 0;
}