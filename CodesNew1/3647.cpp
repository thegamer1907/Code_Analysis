	#include <bits/stdc++.h>
	#define MAX 200001
	#define pb push_back
	#define ll long long
	#define mp make_pair
	#define F first
	#define S second

	using namespace std;

	int main()
	{
	#ifndef ONLINE_JUDGE
		freopen("C:\\Users\\Smit\\Desktop\\in.txt","r",stdin);
	//	freopen("C:\\Users\\viral\\Desktop\\out.txt","w",stdout);
	#endif
		int n,m;
		cin >> n >> m;
		int a[n];
		int mx = -1;
		int sum = 0;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			mx = max(a[i],mx);
			sum += a[i];
		}
		sum += m;
		int mn;
		if(sum%n==0)
		{
			mn = max(mx,sum/n);
		}
		else
		{
			mn = max(mx,(sum/n) + 1);
		}
		cout << mn << " " << mx+m;
		return 0;
	}
