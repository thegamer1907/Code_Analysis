#include <iostream>
#include <algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#define sqr(x) (x)*(x)
using namespace std;
int num[300005],n,m,i,j,ans=-1,sl,sr;
int main()
{
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for (i=1;i<=n;i++) cin>>num[i];
	j=0;
	for (i=1;i<=n;i++)
	{
		while (j<n&&(m>0||num[j+1]))
		{
			j++;
			m-=1-num[j];
		}
		if (j-i+1>ans)
		{
			ans=j-i+1;
			sl=i;
			sr=j;
		}
		m+=1-num[i];
	}
	cout<<ans<<endl;
	for (i=1;i<sl;i++) cout<<num[i]<<' ';
	for (i=sl;i<=sr;i++) cout<<"1 ";
	for (i=sr+1;i<=n;i++) cout<<num[i]<<' ';
	return 0;
}