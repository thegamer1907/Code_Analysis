#include <bits/stdc++.h>
using namespace std;

/**************TEMPLATE***************************************************************************************************/
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)

/*************************************************************************************************************************/

struct num
{
	ll n;
	ll p;
	ll r;
};
num a[4];
bool compare(num a,num b)
{
	return a.n<b.n;
}
int main()
{
	fast_io;
	string s;
	cin>>s;
	memset(a,0,sizeof(a));
	for(int i=0;i<3;i++)
	{
		cin>>a[i].n;
	}
	for(int i=0;i<3;i++)
	{
		cin>>a[i].p;
	}
	ll r;
	cin>>r;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='B')
		{
			a[0].r++;
		}
		else if(s[i]=='S')
		{
			a[1].r++;
		}
		else if(s[i]=='C')
		{
			a[2].r++;
		}
	}
	ll ans=INT_MAX;
	ll rmin;
	for(int i=0;i<3;i++)
	{
		if(a[i].r!=0)
		{
			if((a[i].n/a[i].r)<ans)
			{
				rmin=a[i].r;
			}
			ans=min(ans,a[i].n/a[i].r);

		}
	}
//	cout<<ans<<endl;
	for(int i=0;i<3;i++)
	{
		if(a[i].r>0)
		{a[i].n-=ans*a[i].r;}
	}
	bool check=0;
	bool possible=1;
	bool fcheck=0;
	while(r>0)
	{
		fcheck=0;
		check=0;
		for(int i=0;i<3;i++)
		{
			if(a[i].r>0)
			{	

				if(a[i].n>=a[i].r)
				{
					a[i].n-=a[i].r;
				}
				else
				{
					int y=a[i].r-a[i].n;
					a[i].n=0;
					if(r>=y*a[i].p)
					{
						r=r-(y*a[i].p);
						check=1;
					}
					else
					{
						possible=0;
					}

				}
				if(a[i].n!=0)
				{
					fcheck=1;
				}
			}	
		}
		
		if(check==0)
		{
			break;
		}
		if(possible==1)
		{ans++;}
		if(fcheck==0)
		{
			break;
		}
		
	}
	ll p=0;
	for(int i=0;i<3;i++)
	{
		p+=a[i].p*a[i].r;
	}
	ans+=r/p;
	cout<<ans<<endl;
	return 0;
}