#include<bits/stdc++.h>
#define up(j,k,i) for(i=j;i<k;i++)
#define down(j,k,i) for(i=j;i>k;i--)
#define pp(n) printf("%lld\n",n)
#define pps(n) printf("%lld ",n)
#define all(x) x.begin(),x.end()
#define ps(s) printf("%s",s)
#define is(n) scanf("%lld",&n)
#define ips(n) scanf("%lld",n)
#define ss(s) scanf("%s",s)
#define cool 0
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define f(i) cout<<i<<endl;
#define pll pair<lld,lld> 
#define pi acos(-1)
#ifdef G
#define dg(x) cout<<#x<<' '<<x<<endl;
#define dg2(x,y) cout<<#x<<' '<<x<<' '<<#y<<' '<<y<<endl;
#define dg3(x,y,z) cout<<#x<<' '<<x<<' '<<#y<<' '<<y<<' '<<#z<<' '<<z<<endl;
#define dg4(x,y,z,zz) cout<<#x<<' '<<x<<' '<<#y<<' '<<y<<' '<<#z<<' '<<z<<' '<<#zz<<' '<<zz<<endl;
#else
#define dg(x) ;
#define dg2(x,y) ;
#define dg3(x,y,z) ;
#define dg4(x,y,z,zz) ;
#endif
#define ds(n,m) scanf("%lld %lld",&n,&m)
#define ts(n,m,k) scanf("%lld %lld %lld",&n,&m,&k)
#define yes printf("YES\n")
#define no printf("NO\n")
typedef long double ld;
typedef long long int lld;
using namespace std;
const lld M =2e5+10;
const lld mod=1e9+7;
const lld infi =LLONG_MAX;
lld ans,k,n,x,y,m,mymax=LLONG_MIN,mymin=LLONG_MAX,b,c,z,sum;
vector<lld> v[M];
lld a[M];
lld prefix_sum[M],suffix_sum[M];
map<lld,lld> cnt;
int main()
{
 lld i,j;
 is(n);
 up(0,n,i)
 {
 	is(a[i]);
 	prefix_sum[i+1]=a[i]+prefix_sum[i];
 }
 down(n,0,i)
 {
 	suffix_sum[i]=suffix_sum[i+1]+a[i-1];
 	cnt[suffix_sum[i]]++;
 }
 up(1,n+1,i)
 {
 	cnt[suffix_sum[i]]--;
 	if(cnt[prefix_sum[i]]>0)
 	{
 		ans=max(prefix_sum[i],ans);
 	}
 }
 pp(ans);
 return 0;
}