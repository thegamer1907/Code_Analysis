#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
ll M,N,k,le=1,ri=25*10e10+7;
bool check(ll m)
{
	ll c = 0;
	for(ll i=1;i<=N;i++)
	{
		c+=min(M,m/i);
	}
	return c<k;
}
int main()
{
	cin>>N>>M>>k;
	while(le<=ri)
	{
		ll mid=le+(ri-le)/2;
		if(check(mid)) le = mid+1;
		else  ri = mid-1;
	}
	cout<<le<<endl;
}
