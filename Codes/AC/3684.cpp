#include<bits/stdc++.h>
#define ull long long
using namespace std;
main()
{
	string s1;
	cin>>s1;
	ull nb,ns,nc,reqd,b,s,c,pb,ps,pc,reqdb=0,reqds=0,reqdc=0,r1;
	cin>>nb>>ns>>nc;
	cin>>pb>>ps>>pc;
	cin>>r1;
	ull i;
	for(i=0;s1[i]!='\0';i++)
		if(s1[i]=='B')
			reqdb++;
		else if(s1[i]=='S')
			reqds++;
		else
			reqdc++;
		ull mid,l=0,r=1000000000300;
		while(l<=r)
		{
			 mid=(l+r)/2;
			
			b=(reqdb*mid)-nb;s=(reqds*mid)-ns;c=(reqdc*mid)-nc;
			b=max(b,(ull)0);s=max(s,(ull)0);c=max(c,(ull)0);
			//if(mid==7)
			//	cout<<b*pb+s*ps+c*pc<<"\n";
			if(b*pb+s*ps+c*pc<=r1)
			{
				b=(reqdb*(mid+1))-nb;s=(reqds*(mid+1))-ns;c=(reqdc*(mid+1))-nc;
				b=max(b,(ull)0);s=max(s,(ull)0);c=max(c,(ull)0);
				if((b*pb+s*ps+c*pc)<=r1)
					l=mid+1;
				else
					break;
			}
			else
				r=mid-1;
		}
		cout<<mid<<" ";
}