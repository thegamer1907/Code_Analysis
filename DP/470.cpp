#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,i,j,cnt=0,c;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int m;
	cin>>m;
	int b[m];
	for(i=0;i<m;i++)
		cin>>b[i];
	sort(a,(a+n));
	sort(b,(b+m));
	i=0;
	j=0;		
	while(i<n && j<m)
	{
		c=a[i]-b[j];
		if(c==0 || c==1 || c==-1)
		{
			cnt++;
			i++;
			j++;
		}
		else if(a[i]<=b[j])
		i++;
		else
		j++;
	}
	cout<<cnt;		
}
