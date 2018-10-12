#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int n;
LL k;
LL li[100005];
LL ps[100005];
int main()
{
   scanf("%d%lld",&n,&k);
   for(int i=1;i<=n;i++)
   {
      scanf("%lld",&li[i]);
   }
   sort(li+1,li+n+1);
   for(int i=1;i<=n;i++)
   {
      ps[i] = ps[i-1]+li[i];
//      cout << ps[i] << " " ;
   }
//   cout << endl;
   int cbn=1;
   int cmi=li[1];
   for(int i=2;i<=n;i++)
   {
      int l = 1;
      int r = i-1;
      int ans = i;
      while(l<=r)
      {
         int mid = (l+r)/2;
         LL cur = ps[i-1] - ps[mid-1];
         cur = ((LL)(i-mid) * li[i]) - cur;
         if(cur<=k)
         {
            ans = mid;
            r = mid-1;
         }
         else
         {
            l=mid+1;
         }
      }
//      cout << i << " >> " << ans << endl;
      if(cbn < (i-ans+1))
      {
         cbn = i-ans+1;
         cmi = li[i];
      }
   }
   printf("%d %d\n",cbn,cmi);
 	return 0;
}

