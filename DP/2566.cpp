#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main()
{
	int n,i,m=1,cnt=1;
	cin >> n >> arr[0];
	for(i=1;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i]>arr[i-1])
			cnt++;
		else
			cnt=1;
		m=max(m,cnt);
	}
	cout << m;
	return 0;
}