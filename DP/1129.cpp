#include <bits/stdc++.h>
#define N 109
#define pii pair <int, int>
#define ff first
#define ss second
#define pb push_back

using namespace std;

int n, m, v[N], a, b, ans, x, y;

int main()
{
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>v[i];
		if(v[i]==0)
			x++;
		else
			y++;
	}
	for(int l=1; l<=n; l++)
	{
		for(int r=l; r<=n; r++)
		{
			a=x, b=y;
			for(int i=l; i<=r; i++)
			{
				if(v[i]==1)
					b--, a++;
				else
					a--, b++;
			}
			ans=max(b, ans);
		}
	}
	cout<<ans;
}
