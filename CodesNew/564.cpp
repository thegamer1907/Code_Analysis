#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m, N=1e7+5;
	cin>>n;
	int temp;
	vector<int> a(N+1,0);
	for(int i=0; i<n; i++)
	{	
		cin>>temp;
		a[temp]++;
	}

	vector<bool> prime(N+1, true);
	vector<int >ans(N+1,0);
	//check_prime(prime, ans, a);
	for(int i=2; i<=N; i++)
	{
		if(prime[i]==true)
		{
			ans[i]+=a[i];
			for(int j=2; (i*j)<=N; j++)
			{
				prime[i*j]=false;
				ans[i]+=a[i*j];
			}
		}
	}

	//Prefix sum
	for(int i=2; i<=N; i++)
		ans[i]+=ans[i-1];
		
	cin>>m;
	for(int i=0; i<m; i++)
	{
		int l,r;
		cin>>l>>r;
		l=min(l, N);
		r=min(r, N);
		
		cout<<ans[r]-ans[l-1]<<endl;
	}

	return 0;
}