#include <bits/stdc++.h>
using namespace std;
int n,a[1234],ans,ans1,mx;
bool t=0;
int main ()
{
	cin >>n;
	for (int i=0;i<n;++i)
	{
		cin>>a[i];
		if (a[i]==0) t=1;
		if (a[i]==1) ans1++;
	}
	if (!t)
	{
		cout<<n-1;
		return 0;
	}
	for (int i=0;i<n;++i)
	{
		if (a[i]==0) ans++;
		else ans--;
		mx=max(ans,mx);
		ans=max(0,ans);
	//	cout<<i<<" :  "<<mx<<endl;
	}
//	cout<<ans1<<"    "<<ans<<endl;
	cout<<ans1+mx;
	return 0;
}