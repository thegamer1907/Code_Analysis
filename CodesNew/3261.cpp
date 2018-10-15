#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int n;
int li[100005];

int main()
{
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      scanf("%d",&li[i]);
   }
   sort(li+1,li+n+1);
   LL now = (LL)li[n];
   LL tmp = now;
   for(int i=1;i<n;i++)
   {
      now-= (LL)i*(LL)(li[i+1]-li[i]);
      if(now<0) break;
   }
//   cout << now << endl;
   if(now>0) tmp+=(now+n-2)/(n-1);
   printf("%lld\n",tmp);
 	return 0;
}

