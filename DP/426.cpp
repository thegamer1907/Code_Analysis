#include<bits/stdc++.h>
using namespace std;
int n,m,a[200],b[200],c,j;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0;
	while(i<n&&j<m)
	{
		if(abs(a[i]-b[j])<2)
		{
			c++;
			i++;
			j++;
		}
		else if(a[i]>b[j])
			j++;
		else
			i++;
	}
	cout<<c;
	return 0;
}