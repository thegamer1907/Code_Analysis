#include<bits/stdc++.h>
using namespace std;
long long n,s[500001],ans;
int main()
{
	cin>>n;
	for (int i=1;i<=n;i++) scanf("%lld",&s[i]);
	sort(s+1,s+n+1);
	ans=1;
	for (int i=1;i<=n;i++)
	{
		if (s[i]>=s[ans]*2) 
		ans++;
	}
	ans--; 
	ans=min(n/2,ans);
	cout<<n-ans<<endl;
}