#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll n;
	cin>>n;
	int ar[n];
	int b[n+1];
	b[0]=0;
	int d=0;
	for(int x=0;x<n;x++)
	{
		cin>>ar[x];
		if(ar[x]==1)
		{
			d++;
		}
		b[x+1]=d;
	}
	int ma=0;
	//int  c=0;
	for(int x=0;x<n;x++)
	{
		for(int y=x;y<n;y++)
		{
			int c=0;
			for(int z=0;z<n;z++)
			{
				if(z>=x && z<=y)
				{
					c=c+(1-ar[z]);
				}
				else
				{
					c=c+ar[z];
				}
			}
			if(c>ma)
			{
				ma=c;
			}
		}
	}

	cout<<ma;
	return 0;
}