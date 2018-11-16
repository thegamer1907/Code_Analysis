#include <bits/stdc++.h>
using namespace std;

int cnt[100005],arr[100005];

int main()
{
	int n,i,m,a;
	cin >> n >> m;
	for(i=0;i<n;i++)
		cin >> arr[i];
	cnt[arr[n-1]]++;
	arr[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if(cnt[arr[i]]>0)
			arr[i]=arr[i+1];
		else
		{
			cnt[arr[i]]++;
			arr[i]=arr[i+1]+1;
		}
	}
	for(i=0;i<m;i++)
	{
		cin >> a;
		cout << arr[a-1] << endl;
	}
	return 0;
}