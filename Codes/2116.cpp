#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define slld(x) scanf("%lld",&(x))
#define sd(x) scanf("%lld",&(x))
#define fi first
#define se second
#define mx 100001
#define md 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define pd(x) printf("%lld ",(x))
#define plld(x) printf("%lld ",(x))
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define fr(i,a,b) for(int i=a;i<b;i++)
#define br printf("\n")

unordered_map<int,int> m1,m2;
main()
{
	//freopen("inputf.txt","r",stdin);
	int n,k;
	sd(n);
	sd(k);
	int a[n];
	sd(a[0]);
	for(int i=1;i<n;i++)
		{
			sd(a[i]);
			if(m2.find(a[i])!=m2.end())
				m2[a[i]]++;
			else
				m2.insert(mp(a[i],1));
		}
	int ans = 0;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%k==0)
		{
			int s1,s2;
			if(m1.find(a[i]/k)==m1.end())
				s1=0;
			else s1 = m1[a[i]/k];
			if(m2.find(a[i]*k)!=m2.end())
				s2 = m2[a[i]*k];
			else
				s2 = 0;
			ans+=(s1*s2);
		}
		if(m1.find(a[i])!=m1.end())
			m1[a[i]]++;
		else
			m1.insert(mp(a[i],1));
		m2[a[i+1]]--;
		if(m2[a[i+1]]==0)
			m2.erase(a[i+1]);
	}
	pd(ans);
	return 0;
}