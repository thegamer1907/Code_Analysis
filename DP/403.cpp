#include<bits/stdc++.h>

using namespace std;
int a[100000],b[100000];
int main()
{
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	for(int i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,count=0;
	while(i<n && j<m)
	{
		if(a[i]-b[j]==-1 || a[i]-b[j]==1 || a[i]==b[j])
		{
			count++;
			j++;
			i++;
		}
		else if(a[i]>b[j])
		j++;
		else if(b[j]>a[i])
		i++;
		
	}
	cout<<count;
	return 0;
}