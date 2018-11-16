#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);	cin.tie(NULL);
	int n;	cin>>n;
	int a[n];
	int cnt = 0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]==1)
			cnt += 1;
	}
	int mx = 0;
	int cur = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]==0)
			cur += 1;
		else
		{
			cur -= 1;
		}
		if(cur < 0)
			cur = 0;
		mx = max(mx, cur);
	}
	if(mx==0)
		cout<<n-1<<"\n";
	else
		cout<<cnt+mx<<endl;
	return 0;
}