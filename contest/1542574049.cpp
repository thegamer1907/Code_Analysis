#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<queue>
#include<cstdio>
#define ll long long
#define mset(a,x) memset(a,x,sizeof(a))

using namespace std;
const double PI=acos(-1);
const int inf=0x3f3f3f3f;
const double esp=1e-6;
const int maxn=1e5+5;
const int mod=1e9+7;
int dir[4][2]={0,1,1,0,0,-1,-1,0};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll inv(ll b){if(b==1)return 1; return (mod-mod/b)*inv(mod%b)%mod;}
ll fpow(ll n,ll k){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%mod;n=n*n%mod;}return r;}
int visit[20];

int main()
{
	int n,k,i,j,a;
	while(cin>>n>>k)
	{
		mset(visit,0);
		for(i=0;i<n;i++)
		{
			int ans=0;
			for(j=0;j<k;j++)
			{
				cin>>a;
				ans=ans*2+a;
			}
			visit[ans]++;
		}
		
		for(i=0;i<pow(2,k);i++)
		{
			for(j=0;j<pow(2,k);j++)
			{
				if(visit[i]>0&&visit[j]>0&&((i&j)==0))
				{
					cout<<"YES"<<endl;
					goto q;
				}
			}
		}
		cout<<"NO"<<endl;
q:		;
	}
	return 0;
}