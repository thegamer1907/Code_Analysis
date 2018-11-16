#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n, Destination;
	cin >> n >> Destination;
	for(int i=1;i<n;i++)cin >> a[i];
	int Current = 1;
	bool IsReachable = false;
	a[n] = n;
	while(Current<=n)
	{
		if(Current == Destination)
		{
			IsReachable = true;
			break;
		}
		Current += a[Current];
	}
	if(IsReachable)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}