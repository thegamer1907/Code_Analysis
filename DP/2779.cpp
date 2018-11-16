#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

int n, len=0;
int f[10];

int32_t main()
{
	IOS;
	cin>>n;
	while(n>0)
	{
		f[++len]=n%10;
		n/=10;
	}
	reverse(f+1, f+len+1);
	int ans=0;
	for(int i=1;i<=len;i++)
		ans=max(ans, f[i]);
	cout<<ans<<endl;
	for(int i=1;i<=ans;i++)
	{
		int cur=0;
		for(int j=1;j<=len;j++)
		{
			if(f[j]>=i)
				cur=cur*10 + 1;
			else
				cur*=10;
		}
		cout<<cur<<" ";
	}
	return 0;
} 