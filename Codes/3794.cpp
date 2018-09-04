#include <bits/stdc++.h>
using namespace std;
long long l,r,mid,b,s,c,bp,sp,cp,ans,bb,ss,cc,v;
string S;
int check(long long x)
{
	long long V=v;
	
	if (b<x*bb)
	{
	   if (V>=bp*(x*bb-b)) V=V-bp*(x*bb-b);
	   				  else return 0;
	}
	
	if (s<x*ss)
	{	
	   if (V>=sp*(x*ss-s)) V=V-sp*(x*ss-s);	
	   				else return 0;
	}
	
	if (c<x*cc)
	{	
	   if (V>=cp*(x*cc-c)) V=V-cp*(x*cc-c);	
	   				else return 0;
	}
	
	return 1;
}
main ()
{
	cin>>S;
	cin>>b>>s>>c;
	cin>>bp>>sp>>cp;
	cin>>v;
	
	for (int i=0; i<S.size(); i++)
	{
		if (S[i]=='B') bb++;
		if (S[i]=='S') ss++;
		if (S[i]=='C') cc++;
	}
	
	l=0;
	r=1000000000000000;
	
	while (l<=r)
	{
		mid=(l+r)/2;
		
		if (check(mid)) { ans=mid; l=mid+1; }
				   else { r=mid-1; }		
	}
	
	cout<<ans<<endl;
}