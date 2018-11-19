#include<bits/stdc++.h>
#define ll long long int
#define fill(a,v) memset(a,v,sizeof a)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
ll i,j,n;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	float h,m,t1,t2;
	ll s;
	cin>>h>>m>>s>>t1>>t2;
	float a1=(float)((((3600*h+s+60*m)/120)));

	if(a1>=360)
	{
		a1=-360.000+a1;
	}
	float a2=(float)(((60*m+s)/10));
	if(a2>=360)
	{
		a2=-360.000+a2;
	}
	ll a3=((6*s));

	float at1=(float)((30*t1));
	if(at1>=360)
	{
		at1=-360.000+at1;
	}
	float at2=(float)((30*t2));
	if(at2>=360)
	{
		at2=-360.000+at2;
	}
	/*printf("%0.6f\n",a1);
	printf("%0.6f\n",a2);
	printf("%lld\n",a3);
	printf("%0.6f\n",at1);
	printf("%0.6f\n",at2);*/
	if(at2>=at1)
	{
		if( (a1>at2 || (a1>=0 && a1<at1)) && (a2>at2 || (a2>=0 && a2<at1))  && (a3>at2 || (a3>=0 && a3<at1)))
		{
			cout<<"YES";
			return 0;
		}
		if((a1>at1 && a1<at2) && ((a2>at1 && a2<at2)) && ((a3>at1 && a3<at2)) )
		{
			cout<<"YES";
			return 0;
		}


	}
	else if(at2<at1)
	{
		if( (a1>at1 || (a1>=0 && a1<at2)) && (a2>at1 || (a2>=0 && a2<at2))  && (a3>at1 || (a3>=0 && a3<at2)))
		{
			cout<<"YES";
			return 0;
		}
		if((a1>at2 && a1<at1) && ((a2>at2 && a2<at1)) && ((a3>at2 && a3<at1)) )
		{
			cout<<"YES";
			return 0;
		}
	}

	cout<<"NO";

	

	

	
	
	

	
  return 0;
  }
