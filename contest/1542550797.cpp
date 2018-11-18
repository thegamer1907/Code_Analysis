#include <bits/stdc++.h>
using namespace std;
#define fori(i,n) for(int i=0;i<n;i++)
int main() 

{
	// your code goes here
	bool a[16]={false};
	
	int n,k;
	cin>>n>>k;
	fori(i,n)
	{
		int x=0,y;
		fori(j,k)
		{
			x*=2;
			cin>>y;
			x+=y;
		}
		//cout<<x<<endl;
		a[x]=true;
	}
	bool ans=a[0];
	int ni=pow(2,k);
	fori(i,ni)
	{
		fori(j,ni)
		{
			if(a[i]&&a[j] && !(i&j))
				ans=true;
		}
	}
	if(ans)
		cout<<"Yes\n";
	else
		cout<<"No\n";
		
	return 0;
}