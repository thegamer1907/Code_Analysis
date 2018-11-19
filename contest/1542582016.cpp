#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define ll long long
#define pb push_back
#define pf push_front
#define mp make_pair
#define fr(i,j,ar) for(ll int k=i;k<=j;k++) cin>>ar[k];
#define pii pair<ll int,ll int>
#define MAXN 1000000000001234000

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> OST;

template<class T> T gcd(T a,T b){return (b==0)?a:gcd(b,a%b);}
ll powe(ll a,ll p,ll m=mod)
{ll res=1;while(p>0){if(p&1)res=(res*a)%m;a=(a*a)%m;p>>=1;}
return res;}

ll int n,k;


set<string> se;
vector<string > v;

ll int ones(string s)
{
	ll int count=0;
	for(ll int i=0;i<s.length();i++)
	{
		if(s[i]=='1')count++;
	}
	return count;
}

bool check(std::vector<string> vec)
{
	ll int count[5]={0};
	for(ll int i=0;i<vec.size();i++)
	{
		for(ll int j=0;j<vec[i].size();j++)
		{
			if(vec[i][j]=='1')count[j+1]++;
			if(2*count[j+1]>vec.size())return false;
		}
	}
	return true;

}

int main()
{
    std::ios::sync_with_stdio(false);
		cin>>n>>k;
		for(ll int i=1;i<=n;i++)
		{
			char a;
			string temp;
			for(int j=0;j<k;j++)
			{
				cin>>a;
				temp.pb(a);

			}
			se.insert(temp);

		}
  for(auto u:se)
	{
		v.pb(u);
	}

	ll int si=v.size();
	ll int masks=1<<(si);
	for(ll int i=1;i<masks;i++)
	{
		std::vector<string> hey;
		for(ll int j=0;j<v.size();j++)
		{

			if(((1<<(j))&i)!=0)
			{
				hey.pb(v[j]);
			}

		}
		bool ans=check(hey);
  //  for(auto x:hey)cout<<x<<' ';
	//  cout<<"\n";
		if(ans)
		{
			cout<<"YES";

			return 0;
		}
	}


	cout<<"NO";


    return 0;
}
