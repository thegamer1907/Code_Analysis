#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,c=0,n,k;
	int a[51];
    cin>>n>>k;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
	{
		if(a[i]>0&&a[i]>=a[k])
			c++;
	}
    cout<<c;
}