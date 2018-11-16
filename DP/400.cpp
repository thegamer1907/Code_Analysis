#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define sz(a) (ll)(a.size())
#define pll pair<ll,ll>
ll a[1000005];
ll b[1000005];
ll done[10004];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,i;
	ll j;
	ll count = 0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(i=0;i<m;i++)
		cin>>b[i];

	sort(a,a+n);
	sort(b,b+m);

	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(done[j]==0 && abs(b[j]-a[i])<=1)
			{
				count++;
				done[j]=1;
				break;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}