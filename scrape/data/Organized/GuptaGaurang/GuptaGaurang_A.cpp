#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define ld long double
#define mod 1000000007
#define endl "\n"
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m,k,a[100005],i,j,x=0,y=0,z=0;
	cin>>n>>m>>k;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		if(a[i]<=y*k+z)
		{
		    //cout<<i<<" "<<y<<" "<<z<<endl;
			x++;
			for(j=i;j<m;j++)
			{
				if(a[j]<=y*k+z)
				{
					;
				}
				else
				{
					break;
				}
			}
		    //cout<<i<<" "<<j<<" "<<y<<" "<<z<<endl;
			z+=j-i;
			i=j-1;
		}
		else
		{
		    //cout<<i<<endl;
			if((a[i]-z)%k==0)
			{
				y=(a[i]-z)/k;
			}
			else
			{
				y=(a[i]-z)/k+1;
			}
			i--;
		}
	}
	cout<<x;	
	return 0;
}