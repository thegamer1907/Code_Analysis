#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,l,a[1009];
	cin>>n>>l;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1);
	long long m = max(a[1],l-a[n])*2;
	for(int i=2;i<=n;i++)
		m = max(m,a[i]-a[i-1]);
	printf("%.10lf",m/2.0);
	return 0;
}
