#include<bits/stdc++.h>
using namespace std;
#define N 100001
int n,k,a,b,f[N][5],p[N],w[N];
set<int>s;
int main()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	  {
	  for(int j=1;j<=k;j++)
	    scanf("%d",&f[i][j]),
		w[i]^=f[i][j]<<(j-1),
		p[i]+=f[i][j];
	  if(p[i]==0)return printf("YES\n"),0;
	  s.insert(w[i]);
	  }
	for(int j=0;j<k;j++)
	  {
	  a=b=0;
	  for(int i=1;i<=n;i++)
	    {
	    if(p[i]==1 && w[i]==1<<j)a=1;
	    if(!(w[i]&(1<<j)))b=1;
		}
	  if(a)return printf("%s\n",b?"YES":"NO"),0;
	  }
	for(auto i:s)if(s.count(15-i))return printf("YES\n"),0;
	return printf("NO\n"),0;
}
