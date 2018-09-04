#include <bits/stdc++.h>
#define lll long long
using namespace std;
lll int n,k,A[200005],z,t,cev;
map <lll int,lll int> mp,mp1;
int main()
{
	scanf("%lld %lld",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&A[i]);
		mp[A[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		mp[A[i]]--;
		if(A[i]%k==0)
		{
			cev+=mp1[A[i]/k]*mp[A[i]*k];
		}
		mp1[A[i]]++;
	}
	printf("%lld",cev);
	return 0;
}
