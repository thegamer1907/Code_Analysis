#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n,m,k;
	cin>>n>>m>>k;
	int arr[m];
	for(int i=0; i<m; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+m);
	int ans=0,y=0,delc=0;
	for(int y=0; y<m;)
	{
		int x;
		if(arr[y]+k-arr[y]%k-delc >= 0)
		{
			x= arr[y] + k - arr[y]%k -delc;
		}
		for(int j=0; ; j++)
		{
			if(arr[y]<=x && y<m)
			{
				delc++;
				if(delc>5)
				{
					delc=1;
				}
				y++;
			}
			else break;
		}
		ans++;
		if(x== arr[m-1] +k - arr[m-1]%k -delc) break;
	}
	cout<<ans<<endl;
	return 0;
}