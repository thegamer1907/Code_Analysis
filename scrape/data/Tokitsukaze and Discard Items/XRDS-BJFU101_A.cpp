#include <bits/stdc++.h>
using namespace std;
template<typename T>
inline T read(T&x)
{          x = 0;int f = 1; char ch = getchar();
    while(ch<'0' || ch>'9') { if(ch == '-') f=-1; ch=getchar(); }
    while(ch>='0' && ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
    return x*f;
}
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
#define F first
#define S second
const int M = 1e5 + 10;
const ll INF64=8000000000000000000LL;
const int INF=0x3f3f3f3f;
const ll MOD=ll(1e9+7);
const ld PI=acos(-1);
const ld eps=1e-9;
using namespace std;
ll a[M];
int main()
{
    /*ios::sync_with_stdio(false);
    cin.tie(0);*/
    ll n,m,k;
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    for(int i=1;i<=m;i++)
    scanf("%I64d",&a[i]);
    ll w=0;
    w+=k;
    ll now=1,flag=0,ans=0;
    while(now<=m)
    {
    	if(a[now]-w-1>=k)
    	{
    		ll q=(a[now]-w-1)/k;
    		w+=q*k;
		}
	//	cout<<a[now]<<"   "<<w<<endl;
    	while(a[now]<=w)
  		{
    		flag++;
    		now++;
		}
		if(flag>0)
		{
			w+=flag;
			ans++;
		}
		else
		w+=k;
		flag=0;
	}
    printf("%I64d\n",ans);
   	return 0;
}
/*
13 5 4
3 5 6 10 13
*/