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
	string s;
	cin>>s;
	cin>>n;
	string s1[n];
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	for(i=0;i<n;i++)
	{
		if(s1[i]==s)
		{
			cout<<"YES";
			return 0;
		}
	}
	ll f=0,sss=0;
	for(i=0;i<n;i++)
	{
		if(s1[i][1]==s[0])
		{
			f=1;
		}
		if(s1[i][0]==s[1])
		{
			sss=1;
		}
	}
	if(f&sss)
		cout<<"YES";
	else
		cout<<"NO";



	  
  return 0;
  }
