#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define mk make_pair
#define pb push_back
#define eps 1e-12
#define sd(x) scanf("%d",&x)
#define sdl(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define pdl(x) printf("%lld\n",x)
#define MAXN 200009
using namespace std;
int main()
{
	int n,m,k;
	sd(n);
	sd(m);
	sd(k);
	vector<pii> v;
	for(int i=1;i<=n;i++)
	{
		if(i%2)
		{
			for(int j=1;j<=m;j++)
			{
				v.pb(mk(i,j));
			}
		}
		else
		{
			for(int j=m;j>=1;j--)
			{
				v.pb(mk(i,j));
			}
		}
	}
	for(int i=0;i<v.size();i+=2)
	{
		if(k>1)
		{
			cout<<"2 "<<v[i].first<<" "<<v[i].second<<" "<<v[i+1].first<<" "<<v[i+1].second<<endl;
			k--;
		}
		else
		{
			int sz=v.size();
			cout<<sz-i<<" ";
			for(int j=i;j<v.size();j++)
			{
				cout<<v[j].first<<" "<<v[j].second<<" ";
			}
			cout<<endl;
			break;
		}
	}
	return 0;
}