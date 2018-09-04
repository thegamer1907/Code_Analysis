#include<bits/stdc++.h>

#define fr(i,lb,ub) for(ll i=lb;i<=ub;i++)
#define rf(i,ub,lb) for(ll i=ub;i>=lb;i--)
#define ft(it,v) for(it=v.begin();it!=v.end();it++)
#define ll int
#define ull unsigned long long
#define f first
#define s second
#define pb push_back
#define sn(n) scanf("%lld",&n)
#define sstr(str) scanf("%s",str.c_str()+1)
#define pt(n) printf("%lld\n",n)
#define fin(input) freopen("input.txt","r",stdin)
#define fout(out) freopen("out.txt","w",stdout)
#define PII pair<ll,ll>
#define mp(a,b) make_pair(a,b)
#define MOD 1000000007
#define MAX1 10000005
#define inf 1000000000000000LL
using namespace std;

ll bit[MAX1+1]={0};
ll prime[MAX1+1];
map<ll,ll>m1;
ll k=1;
void upd(ll i,ll val)
{
	for(;i<=MAX1;i+=i&-i)
		bit[i]+=val;
}
long long int query(ll x)
{
	long long int sum=0;
	for(;x>0;x-=x&-x)
		sum+=bit[x];
	return sum;
}

int main()
{
	fr(i,0,MAX1)prime[i]=1;
     prime[0]=prime[1]=1;
     for(int i=2;i*i<=MAX1;i++)
	if(prime[i]==1)
	{
	for(int j=i*i;j<=MAX1;j=j+i)
		if(prime[j]==1)
			prime[j]=i;
	}
	fr(i,2,MAX1)
	if(prime[i]==1)
	{
	prime[i]=i;
	}
     ll n;
   scanf("%d",&n);
     fr(i,1,n)
     {
          ll k;
        scanf("%d",&k);

		while(k!=1)
		{
		ll m=prime[k];
		while(m==prime[k])
		k=k/prime[k];
		upd(m,1);
		//cout<<m<<endl;
		}
     }
     ll m;
	scanf("%d",&m);
     fr(i,1,m)
     {
	ll a,b;
	scanf("%d%d",&a,&b);
	if(a>MAX1)
	{
		cout<<0<<endl;
		continue;
	}
	if(b>MAX1)
		b=MAX1;
	long long int ans=query(b)-query(a-1);
	printf("%lld\n",ans);
     }

	return 0;
}
