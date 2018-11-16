//  Suraj Saste

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define in insert
#define fe first
#define se second
#define ms(x,i) memset(x,i,sizeof(x))
#define prec(x) cout<<std::setprecision(x)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
ll fpow(ll n, ll k, ll p=mod) {ll r=1; n=n%p; while(k>0){ if(k&1){ r=(r*n)%p; } k=k>>1; n=(n*n)%p; } return r;}
bool isPrime(ll n){ if(n<=1)return false;if(n<=3)return true;if(n%2==0 || n%3==0)return false;for(ll i=5;i*i<=n;i+=6){if(n%i==0||n%(i+2)==0)return false;}return true;}


int main()
{
	fast;
	ll n;cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=-1;
	for(ll i=0;i<n;i++)
	{
		for(ll j=i;j<n;j++)
		{
			ll x[n];
			for(ll i=0;i<n;i++)
				x[i]=a[i];
			for(ll k=i;k<=j;k++)
			{
				if(x[k]==0)
					x[k]=1;
				else
					x[k]=0;
			}
			ll cnt=0;
			//cout<<"i="<<i<<" "<<"j="<<j<<"----";
			for(ll i=0;i<n;i++)
			{
				//cout<<x[i]<<" ";
				if(x[i]==1)
					cnt++;
			}
			//cout<<"\n";
			if(cnt>ans)
				ans=cnt;
		}
	}
	cout<<ans;
	return 0;
}