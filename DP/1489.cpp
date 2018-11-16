#include<bits/stdc++.h>
#define ve vector
#define pb push_back
using namespace std;

void solve(ve<int> v, int k)
{
	int sum=0;
	int ans = -1000000000;
	for(auto a:v)
	{
		sum += a;
		ans = max(sum,ans);
		if(sum < 0)
			sum=0;
	}
	cout<<ans+k<<endl;
}

int main()
{
	int n,k=0;
	cin >> n;
	ve<int> v;
	while(n--)
	{
		int a; cin >> a;
		k+=a;
		if(a ==0) v.pb(1);
		else v.pb(-1);
	}
	solve(v,k);

	return 0;
}