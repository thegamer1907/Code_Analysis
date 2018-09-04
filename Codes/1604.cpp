#include <bits/stdc++.h>
using namespace std;
#define sc(x)            scanf("%d",&x)
#define scc(x)           scanf("%c",&x)
#define scl(x)           scanf("%I64d",&x)
#define sz(v)	     	(v.size())
#define mem(v, d)		memset(v, d, sizeof(v))
#define oo				1000000100
#define OO				10000000000100
#define PI 3.14159265
typedef unsigned int uint;
typedef long long ll;
//-----------------------------------------------------
#define N 100005
//int dX[] = {0,0,1,-1};
//int dY[] = {1,-1,0,0};
int n,s;
ll a[N],na[N],ans;
bool ok(int k)
{
    ll sum = 0,counter=0;
    for(int i=0;i<n;++i) na[i]=a[i]+(i+1)*1LL*k;
    sort(na,na+n);
    for(int i=0;i<k;++i)
    {
        sum+=na[i];
        if(sum<=s) counter++;
        else break;
    }
    if((counter>=k)) ans = sum;
    return(counter>=k);
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   sc(n); sc(s);
   for(int i=0;i<n;++i) scl(a[i]);
   int l=0,r=n;
   while(l<r)
   {
       int mid = l+(r-l+1)/2;
       if(ok(mid)) l = mid;
       else r = mid-1;
   }
   printf("%d %lld",l,ans);
    return 0;
}
