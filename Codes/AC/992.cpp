#include<bits/stdc++.h>
using namespace std;
const int boss=1e5;//a
int n,k,ans,a[boss+10],b[boss+10];char c[boss+10];
int main()
{
int i;
scanf("%d%d%s",&n,&k,c+1);
for (i=1;i<=n;i++) a[i]=a[i-1]+(c[i]=='a'),b[i]=b[i-1]+(c[i]=='b');
for (i=1;i<=n;i++)
  {
  int p1,p2;
  p1=upper_bound(a+i,a+n+1,a[i-1]+k)-a;
  p2=upper_bound(b+i,b+n+1,b[i-1]+k)-b;
  ans=max(ans,max(p1,p2)-i);
  }
printf("%d",ans);
}