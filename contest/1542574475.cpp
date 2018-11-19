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

int solve(double a,double b,double c)
{
	if(c>=a&&c<=b)
	return 1;
	else
	return 0;
}

int main()
{
	int h,t1,t2,i,j,k;
	int m,s;
	while(cin>>h>>m>>s>>t1>>t2)
	{
		if(t1>t2)
		swap(t1,t2);
		
		h=h%12;
		double a=t1*30.0;
		double b=t2*30.0;
		double c=(h*30)+m*0.5+s/120.0;
		double d=m*6.0+s*1.0/60.0;
		double e=s*6.0;
		
		int ans=0;
		ans+=solve(a,b,c);
		ans+=solve(a,b,e);
		ans+=solve(a,b,d);
		if(ans==0||ans==3)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}