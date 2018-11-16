#include <bits/stdc++.h>
using namespace std;

int arr[1005],p[1005];

int main()
{
	int n,i,m,k=0;
	cin >> n >> m;
	for(i=0;i<n;i++)
		cin >> arr[i];
	for(i=0;i<m;i++)
		cin >> p[i];
	sort(p,p+m,greater<int>());
	for(i=0;i<n;i++)
		if(arr[i]==0)
		{
			arr[i]=p[k];
			k++;
		}
	for(i=1;i<n;i++)
		if(arr[i-1]>=arr[i])
			break;
	if(i==n)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}