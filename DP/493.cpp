#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);	cin.tie(NULL);
	int n;	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
		
	int m;	cin>>m;
	int b[m];
	for(int i=0; i<m; i++)
		cin>>b[i];
		
	sort(a, a+n);
	sort(b, b+m);
	
	int cnt = 0;
	int i=0, j=0;
	while(i<n and j<m)
	{
		if(abs(a[i]-b[j]) <= 1)
		{
			cnt += 1;
			i += 1;
			j += 1;
		}
		else if(a[i] > b[j])
			j += 1;
		else
			i += 1;
	}
	cout<<cnt<<endl;
	return 0;
}