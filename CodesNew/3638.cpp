#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;i<n;i++)
#define ll long long

#define pb push_back
#define mp make_pair
#define F first
#define S second

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";

using namespace std;
/**************************************************************************/
int main()
{
	fastIO;
	ll m,n,i,j,k,a[101],mn,mx=0,ex=0,mm;
	cin>>n>>m;mm=m;
	fo(i,n){cin>>a[i];mx = max(mx,a[i]);}
	fo(i,n){ex+=mx-a[i];}
	m-=ex;
	mn=mx;
	if(m>0)
	{
		mn += m / n + (m%n!=0);
	}
	cout<<mn<<" "<<mx+mm<<endl;
}

/*************************************************************************/