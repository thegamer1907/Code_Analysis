#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int a[600000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int m=n-1;
	int ans=n;
	for(int i=n/2-1; i>=0; i--)
	{
		if(a[i]*2<=a[m])
		{
			ans--;
			m--;
		}
	}
	cout<<ans<<endl;
	return 0;
}
