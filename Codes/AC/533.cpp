#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
ll n,k,x,t,ans=0;
int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin >> k;
	for(int i=1; i<=100000000; i++)
	{
		x=i;
		t=0;
		while(x>0)
		{
			t+=x%10;
			x/=10;
		}
		if(t==10)
			ans++;
		if(ans==k)
		{
			cout << i;
			return 0;
		}
	}
	return 0;
}
