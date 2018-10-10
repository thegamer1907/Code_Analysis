#include "bits/stdc++.h"
#define fi first
#define se second
#define wait ooo
#define int long long
using namespace std;
int t,n,m,k,sum;
long double a[10000];
int s(int k)
{
    int res=0;
    while (k>0)
    {
        res+=(k%10);
        k/=10;
    }
    return res;
}
signed main()
{
   cin>>k;
   int p=0;
   for (int i=1; i<1e8; i++)
   {
       if (s(i)==10)
        p++;
       if (p==k)
       {
          cout<<i<<endl;
          return 0;
       }
   }
}
