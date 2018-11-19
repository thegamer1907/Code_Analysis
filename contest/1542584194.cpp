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
const int maxn=100005;
const int mod=1e9+7;
int dir[4][2]={0,1,1,0,0,-1,-1,0};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll inv(ll b){if(b==1)return 1; return (mod-mod/b)*inv(mod%b)%mod;}
ll fpow(ll n,ll k){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%mod;n=n*n%mod;}return r;}

int main()
{
	int i,j,k,n;
	char a,b,c,d;
	string map[105];
	while(cin>>a>>b)
	{
		cin>>n;
		int flag=0,flag2=0;
		for(i=0;i<n;i++)
		{
			cin>>map[i];
		}
		
		for(i=0;i<n&&!flag;i++)
		{
			if(map[i][0]==a&&map[i][1]==b)
			{
				flag=1;
				break;
			}
			for(j=0;j<n&&!flag;j++)
			{
				if(map[i][1]==a&&map[j][0]==b)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}