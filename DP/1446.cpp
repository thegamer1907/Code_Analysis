#include<bits/stdc++.h>
using namespace std;
int ans=-110,d[105][105],res;
bool f[105];int n;
inline void add(int x,int y)
{
	for(int i=1;i<=x;i++)
		for(int j=x;j<=n;j++)
			d[i][j]+=y;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>f[i];
		if(f[i])add(i,-1),res++;
		else add(i,1);
	}
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
			ans=max(ans,d[i][j]);
	cout<<ans+res<<endl;
	return 0;
}