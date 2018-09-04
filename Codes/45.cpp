#include <bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define pi pair <int, int>
#define ppi pair <pair <int, int>, int>
#define fi first
#define se second
typedef long long ll;

using namespace std;

ll a[1005];

int main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//freopen("input1.txt", "r", stdin);
	//freopen("output2.txt", "w", stdout);

	ll n, m, k, i, j, l, p, t=1;
	double ans;
	//cin>>t;
	while(t--)
	{
		cin>>n>>l;
		for(i=0; i<n; i++)
			cin>>a[i];
		sort(a, a+n);
		j=0;
		for(i=0; i<n-1; i++)
		{
			if(a[i+1]-a[i]>j)
				j=a[i+1]-a[i];
		}
		ans=(double)j/2.0;
		if(a[0]>ans)
			ans=a[0];
		if(l-a[n-1]>ans)
			ans=l-a[n-1];
		printf("%0.12lf", ans);

	}

	return 0;
}