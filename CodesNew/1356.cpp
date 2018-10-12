#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

string s;
LL sto[4];
LL pr[4];
LL need[4];
LL mon;

bool cek(LL x)
{
   LL cur = mon;
   for(int i=1;i<=3;i++)
   {
      LL tmp = max(0LL,(x*need[i]) - sto[i]);
      tmp*=pr[i];
      cur-=tmp;
   }
   return cur>=0;
}

int main()
{
   cin >> s;
   for(int i=1;i<=3;i++) scanf("%lld",&sto[i]);
   for(int i=1;i<=3;i++) scanf("%lld",&pr[i]);
   scanf("%lld",&mon);
   for(int i=0;i<s.size();i++)
   {
      if(s[i] == 'B') need[1]++;
      else if(s[i] == 'S') need[2]++;
      else need[3]++;
   }
   LL l = 0;
   LL r = 1e13;
   LL ans = 0;
   while(l<=r)
   {
      LL mid = (l+r)/2;
      if(cek(mid))
      {
         ans = mid;
         l=mid+1;
      }
      else
      {
         r=mid-1;
      }
   }
   printf("%lld\n",ans);
 	return 0;
}

