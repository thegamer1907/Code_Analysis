#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define forn(i,n) for(i=0;i<n;i++)
#define elif else if
using namespace std;
ll i,j;
vector < pair < char ,char > > vec;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	string s1;
	cin>>s1;
	char a,b;
	a=s1[0];
	b=s1[1];
	ll n,flag=0;
	cin>>n;
	forn(i,n)
	{
		string s2;
		cin>>s2;
		vec.pb(mp(s2[0],s2[1]));
		if(s2[0]==a && s2[1]==b)
		{
			flag=1;
		}	
	}
	if(flag==1)
	{
		cout<<"YES";
		return 0;
	}
	else
	{
		forn(i,vec.size())
		{
			if(vec[i].ss==a)
			{
			forn(j,vec.size())
			{
				if(vec[j].ff==b)
				{
					cout<<"YES";
					return 0;
				}
			}
			}
		}
	}
	cout<<"NO";
	return 0;
}

