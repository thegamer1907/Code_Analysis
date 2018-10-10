#include<bits/stdc++.h>
using namespace std;
int k,t;
int judge(int p)
{
int bit[20],sum=0,t=0,i,n=p;
for (;p;p/=10) bit[++t]=p%10;
for (i=t;i;i--) sum+=bit[i];
return sum==10;
}
int main()
{
int i;
scanf("%d",&k);
for (i=19;t<k;++i) if (judge(i)) ++t;
printf("%d",i-1);
}