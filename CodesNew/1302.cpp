#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fr first
#define sc second
#define mp pair <ll,ll>
#define mk make_pair
#define vll vector<ll>
#define i_ii pair < ll, mp >
#define tam 1000000000

using namespace std;
ll a,b,c,x,y,z,s1,s2,s3,sa,sb,sc;
string txt;
ll d=0,f=0,g=0;
ll ha()
{
	ll cb=10000000000000,cs=10000000000000,cc=10000000000000,ct=0;
	if(d!=0)cb=a/d;
	if(f!=0)cs=b/f;
	if(g!=0)cc=c/g;
	ct=min(cb,min(cs,cc));
	if(d!=0)
	{
		s1=(a%d)+a-d*ct;
	}
	if(f!=0)
	{
		s2=(b%f)+b-f*ct;
	}
	if(g!=0)
	{
		s3=(c%g)+c-g*ct;
	}
	if((d==0)||(f==0)||(g==0)||(ct==0))
	{
		s1=a;s2=b;s3=c;ct=0;
	}
	return ct;
}
ll ch(ll wgh)
{
	ll pric=0;
	ll w1=wgh,w2=wgh,w3=wgh;
	sa=s1;sb=s2;sc=s3;
	if(d!=0)
	{
		while((sa>=d)&&(w1>=1))
		{
			sa-=d;
			w1--;
		}
	}
	if(f!=0)
	{
		while((sb>=f)&&(w2>=1))
		{
			sb-=f;
			w2--;
		}
	}
	if(g!=0)
	{
		while((sc>=g)&&(w3>=1))
		{
			sc-=g;
			w3--;
		}
	}
	pric=d*x*w1+f*y*w2+g*z*w3;
	return pric;
}
int main()
{
	cin>>txt;
	for(int i=0;i<txt.size();i++)
	{
		if(txt[i]=='B')
		{
			d++;
		}
		if(txt[i]=='S')
		{
			f++;
		}
		if(txt[i]=='C')
		{
			g++;
		}
	}
	cin>>a>>b>>c;
	cin>>x>>y>>z;
	ll w;cin>>w;
	ll izq=0,der=1000000000000,mid;
	while(izq<=der)
	{
		mid=(izq+der)/2;
		if(ch(mid)>w)
		{
			der=mid-1;
		}
		else
		{
			izq=mid+1;
		}
	}
	ll ctot=0,sobr;
	ctot+=ha();
	ctot+=der;
	sobr=w-ch(der);
	s1=sa;s2=sb;s3=sc;
	while(sobr>=0)
	{
		if(s1>=d)
		{
			s1-=d;
		}
		else
		{
			if(sobr>=(d-s1)*x)
			{
				sobr-=(d-s1)*x;
				s1=0;
			}
			else
			{
				break;
			}
		}
		if(s2>=f)
		{
			s2-=f;
		}
		else
		{
			if(sobr>=(f-s2)*y)
			{
				sobr-=(f-s2)*y;
				s2=0;
			}
			else
			{
				break;
			}
		}	
		if(s3>=g)
		{
			s3-=g;
		}
		else
		{
			if(sobr>=(g-s3)*z)
			{
				sobr-=(g-s3)*z;
				s3=0;
			}
			else
			{
				break;
			}
		}
		ctot++;
	}
	cout<<ctot<<endl;
	return 0;																																																																																																																																																																																													
}