#include<bits/stdc++.h>
using namespace std;
int a[20],b[5];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	int x;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
			cin>>b[j];
		a[b[1]+(b[2]<<1)+(b[3]<<2)+(b[4]<<3)]=1;
	}
	int cnt=0;
	for(int i=0;i<=(1<<k);i++)
		for(int j=0;j<=(1<<k);j++)
			if(!(i&j)&&a[i]&&a[j])
				{cout<<"YES";return 0;}
	cout<<"NO";
}
