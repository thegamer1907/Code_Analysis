#include <iostream>
using namespace std;
long long n,v,x,a[100001],f[100001],ans[100001],i,j,m;

int main() {
	cin>>n>>m;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	ans[n-1]=1;
	f[a[n-1]]++;
	for(i=n-2;i>=0;i--)
	{
		f[a[i]]++;
		if(f[a[i]]>1)
		{
			
			ans[i]=ans[i+1];
		}
		else
		ans[i]=ans[i+1]+1;
	}
	for(i=0;i<m;i++)
	{
		cin>>v;
		cout<<ans[v-1]<<endl;
	}

	
	return 0;
}

