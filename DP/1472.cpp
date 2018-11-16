#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
	int n,ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
		{
			int cnt=0;
			for(int k=1;k<i;k++)
				cnt+=a[k];
			for(int k=i;k<=j;k++)
				cnt+=(!a[k]);
			for(int k=j+1;k<=n;k++)
				cnt+=a[k];
			ans=max(ans,cnt);
		}
	cout<<ans<<endl;
	return 0;
}
