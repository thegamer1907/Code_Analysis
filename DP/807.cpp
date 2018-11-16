#include<bits/stdc++.h>
#define fill(a,x) memset(a,x,sizeof(a));
typedef long long lli;
#define MOD 1000000007
#define SIZE 100005
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define MAX 1000001
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	int n,a[102]={0};
	cin>>n;
	int ans=0;
	int p[102]={0};
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i])
		{
			ans++;
			p[i]=-1;
		}
		else
			p[i]=1;
	}
	int sm=p[0],sum=0;
	for(int i=0; i<n; i++)
	{
		sum+=p[i];
		// cout<<sum<<endl;
		sm=max(sm,sum);
		if(sum<0)
			sum=0;
	}
		// sm=max(sm,sum);

	cout<<ans+sm<<endl;
	return 0;
}