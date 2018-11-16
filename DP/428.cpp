#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,k;
	int a[1000],b[1000];
	cin>>n;
	k=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	for(i=0;i<m;i++)
	cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	i=0;
	j=0;
	while(i<n&&j<m)
	{
		if(a[i]-b[j]==0||a[i]-b[j]==1||a[i]-b[j]==-1)
		{
			i++;
			j++;
			k++;
		}
		else if(a[i]<b[j])
		i++;
		else 
		j++;
	}
	cout<<k<<endl;
	return 0;
}