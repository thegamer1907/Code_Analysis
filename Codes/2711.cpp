#include <bits/stdc++.h>

#define ld long double
#define pii pair<int,int>
#define X first
#define Y second
#define mp make_pair
#define MOD 1000000007ll
#define inf 1000000000000000ll

using namespace std;

inline int binexp(int a,int b,int m)
{
	int res=1;
	a%=m;
	while(b)
	{
		if(b&1)
		{
			res=(res*1ll*a)%m;
		}
		a=(a*1ll*a)%m;
		b>>=1;
	}
	return res;
}

const int N=1e6+6;
int z[N];

signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt.txt","r",stdin);
	freopen("output.txt.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	int n=s.length(),l=0,r=0;
	multiset<int> ms;
	for(int i=1;i<n;i++)
	{
		if(i>r)
		{
			l=r=i;
			while(r<n and s[r-l]==s[r])r++;
			z[i]=r-l,r--;
		}
		else
		{
			if(z[i-l]+i<=r)
				z[i]=z[i-l];
			else
			{
				l=i;
				while(r<n and s[r-l]==s[r])r++;
				z[i]=r-l,r--;
			}
		}
		ms.insert(z[i]);
	}
	int mx=0;
	for(int i=n-1;i>=1;i--)
	{
		ms.erase(ms.find(z[i]));
		if(z[i] and z[i]==n-i)
		{
			if(ms.lower_bound(z[i])!=ms.end())
				mx=z[i];
		}
	}
	for(int i=n-1;i>=1;i--)
	{
		if(mx and z[i]==mx)
		{
			cout<<s.substr(i)<<"\n";
			return 0;
		}
	}
	cout<<"Just a legend\n";
	return 0;
}  
