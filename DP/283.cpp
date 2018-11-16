#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,a[105],m,j,b[105],flag=0;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	for(j=0;j<m;j++)
	cin>>b[j];
	sort(a,a+n);
	sort(b,b+m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]-b[j]==-1||a[i]-b[j]==1||a[i]-b[j]==0)
			{
				flag++;
				b[j]=a[i]=-1;
				break;
			}
		}
	}
	cout<<flag;
}