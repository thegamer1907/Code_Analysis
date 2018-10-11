#include <bits/stdc++.h>

using namespace std;

int n;
int arr[100005];

int main()
{
	cin >> n;
	for(int i=0;i<n;i++) cin >> arr[i];
	int ans=1,d=(1<<30);
	for(int i=0;i<n;i++)
	{
		int x=(arr[i]-i+n-1)/n;
		if(x<d)
		{
			d=x; ans=i+1;
		}
	}
	cout << ans << endl;
}