#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int boss=1e5;
int n,s,a[boss+10];

ll judge(int k,int p=0)
{
int i;ll sum=0,b[boss+10];
for (i=1;i<=n;i++) b[i]=a[i]+1ll*i*k;
sort(b+1,b+n+1);
for (i=1;i<=k;i++) sum+=b[i];
return p?sum:sum<=s;
}

int main()
{
int i,l,r,mid;
scanf("%d%d",&n,&s);
for (i=1;i<=n;i++) scanf("%d",&a[i]);
for (l=0,r=n;l<=r;)
  {
  mid=l+r>>1;
  judge(mid)?l=mid+1:r=mid-1;
  }
printf("%d %lld",l-1,judge(l-1,1));
}