#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,m;
	cin>>n;
	int *a=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	int *b=(int*)malloc(m*sizeof(int));
	for(int i=0;i<m;i++)
		cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,ans=0;
	while(i<n && j<m)
	{
		if(abs(a[i]-b[j])<=1)
		{
			ans++;i++;j++;
		}
		else if(a[i]<b[j])
			i++;
		else
			j++;
	}
	cout<<ans<<endl;
	free(a);
	free(b);
}
