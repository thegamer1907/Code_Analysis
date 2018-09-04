#include<bits/stdc++.h>
using namespace std;
int a[1000010],f[10000010]={0},l,r,tong[10000010]={0};bool p[10000010];
int main()
{//
int n,m,i,j,da=-100000;
cin>>n;
for (i=1;i<=n;i++)
  {
  scanf("%d",&a[i]);
  tong[a[i]]++;
  }
p[1]=1;
for (i=2;i<=10000005;i++) if (p[i]==0)
  {
  for (j=i;j<=10000005;j+=i)
    {
    p[j]=1;
	f[i]+=tong[j];
	}  
  }
for (i=2;i<=10000005;i++) f[i]+=f[i-1];
cin>>m;
for (i=1;i<=m;i++)
  {
  scanf("%d%d",&l,&r);
  if (l!=10000005) l=min(l,10000004);
  r=min(r,10000004);
  printf("%d\n",f[r]-f[l-1]);
  } 
}