//long time no ac
#include <bits/stdc++.h>
using namespace std;

typedef		long long int 	ll;
#define		rep(i,n) 		for(i=0;i<n;i++)
#define		repe(i,I1,I2) 	for(i=I1;i<I2;i++)
#define		INF  			1e9 + 7
#define		pb  			push_back
#define		mp  			make_pair


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,s=0,t,c=0,i,mx,mn,m;
	t=1;
	//cin>>t;
	
	while(t--)
	{
		cin>>n>>m;
		int a[n];
		rep(i,n)
		{
			cin>>a[i];
			c=max(c,a[i]);
			s+=a[i];
		}
		mx=m+c;
		

		if((m+s-c)<=((n-1)*c))
			mn=c;
		else
		{
			mn=((m+s)/n);
			if((m+s)%n)
				mn++;
		
		}
		cout<<mn<<" "<<mx;
		if(t!=0)
	   		cout<<"\n";
	}
	return 0;
}