#include <bits/stdc++.h>
using namespace std;
const int maxn = 2000010;
string a[maxn];

int main(int argc, char const *argv[])
{
	int n,fg;scanf("%d",&n);
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n-1;i>=1;i--)
	{
		if(a[i]>a[i+1])
		{
			fg=0;
			for(int j=0;j<a[i+1].size();j++)
			{
				if(a[i][j]>a[i+1][j]){a[i]=a[i].substr(0,j);fg=1;break;}
			}
			if(!fg)a[i]=a[i].substr(0,a[i+1].size());
		}
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<endl;
	return 0;
}