#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define pb push_back
#define X first
#define Y second
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define MII map<int,int>
#define MLL map<ll,ll>
#define MSI map<string,int>
#define sitr set<ll>:: iterator
#define mitr map<ll,ll> :: iterator
#define vitr vector<ll> :: iterator
#define F(a,t) for(int i=a;i<t;i++)
#define si(t) scanf("%d",&t)
#define ss(t) scanf("%s",&t)
#define pi(t) printf("%d",t)
#define sl(t) scanf("%lld",&t)
#define pl(t) printf("%lld",t)
#define ps(t) printf("%s",t)
#define pc(t) printf("%c",t)
using  namespace std;
ll count_bits(ll x)
{
	ll c=0; while(x>0){c+=x%2;x/=2;} return c;
}
ll pow(ll x,ll y)
{
   if(y==0) return 1;ll tmp=pow(x,y/2);if(y%2==0) return (tmp*tmp)%mod;else return ((tmp*tmp)%mod*x)%mod;
}
ll gcd(ll a,ll b)
{
	if(b==0) return a;return gcd(b,a%b);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,t;
	cin>>n>>t;
	int a[n];
	F(0,n-1)
	cin>>a[i];
	int t1=0;
	int i=0;
	int f=0;
	while(i<n-1)
	{
		t1=a[i];
		if(i+1==t)
		{
			f=1;break;
		}
		i=i+a[i];
	}
	if(i+1==t)
	f=1;
	if(f==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}