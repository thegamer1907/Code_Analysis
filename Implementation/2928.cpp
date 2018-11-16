#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{int a[100],mi,mit;ll ans;
	for(int i=0;i<4;i++)
	cin>>a[i];
	
	mi =a[0];
	for(int i=0;i<4;i++)
	if(i!=1)
	mi = min(mi,a[i]);
	
	ans = mi*256;
	
	a[0]-=mi;
	a[2]-=mi;
	a[3]-=mi;
	
	mit = min(a[0],a[1]);
	 ans+= mit*32;
	 // cout<<mi<<" "<<mit<<" "<<ans;
	 cout<<ans;
	
}