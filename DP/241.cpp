#include<bits/stdc++.h>
using namespace std;
int a[101],b[101];
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,i,j,k,count=0;
	cin>>n;
	for(i=0;i<n;i++) cin>>a[i];
	cin>>m;
	for(i=0;i<m;i++) cin>>b[i];
	sort(a,a+n);
	sort(b,b+m);
	i=0;j=0;
	while(i<n&&j<m)
	{
		if(abs(a[i]-b[j])<=1)
		count++,i++,j++;
		else if(a[i]-b[j]<0)
		i++;
		else j++;
	}
	cout<<count;
	
}