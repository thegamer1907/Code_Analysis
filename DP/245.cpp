#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n;int a[n+1];
	for(int i=0;i<n;i++)cin>>a[i];
	cin>>m;int b[m+1];
	for(int i=0;i<m;i++)cin>>b[i];
	int j=0,c=0;
	sort(a,a+n);sort(b,b+m);
	int start=0;
	for(int i=0;i<n;i++)
	{
		for(int j=start;j<m;j++)
		{
			if(abs(a[i]-b[j])<=1)
			{
				c++;
				start=j+1;break;
				
			}
		}
	}
	cout<<c;
	return 0;
}
/*while(i<n&&j<m)
	{
		if(abs(a[i]-b[j])<=1)
		{
			i+=1;j+=1;c++;continue;
		}
		if(abs(a[i+1]-b[j])<=1)
		{
			i+=2;j+=1;c++;continue;
		}
		if(abs(a[i]-b[j+1])<=1)
		{
			i+=1;j+=2;c++;continue;
		}
		i++;j++;
	}*/
