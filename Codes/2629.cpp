#include<bits/stdc++.h>
using namespace std;
int hash[10000002],sum[10000002];
void seive()
{
  int i,j;
  for(i=2;i<=10000000;++i)
  {
    if(!hash[i])
    {
      j=1;
      while(j*i<=10000000)
      {
        hash[j*i]=i;
        ++j;
      }
    }
  }
}
int main(){
   int n,a,pre,m,i;
   long long l,r;
   scanf("%d",&n);
   seive();
   for(i=0;i<n;++i){
     scanf("%d",&a);
     pre=-1;
     while(a>1){
        if(hash[a]!=pre)
           sum[hash[a]]++;
        pre=hash[a];
        a/=hash[a];
     }
   }
   for(i=2;i<=10000000;++i)
     sum[i]+=sum[i-1];
   scanf("%d",&m);
   while(m--){
     scanf("%lld %lld",&l,&r);
     if(r>10000000)
        r=10000000;
     if(l>10000000)
       printf("0\n");
     else
       printf("%d\n",sum[r]-sum[l-1]);
   }
   return 0;
}