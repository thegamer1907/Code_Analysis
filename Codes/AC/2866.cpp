#include <bits/stdc++.h>
#define F first
#define S second
using namespace std;
string s;
long long modulo1=1000000007;
long long modulo2=1000000009;
pair<long long,long long>prefix[1000006];
vector<long long>v;
string check(int x)
{	
	pair<long long,long long>PREFIX;
	
	x--;
	
	long long X1=1,X2=1,x1=0,x2=0;
	
	for (int i=1; i<=x; i++)
	{
		X1=(X1*27)%modulo1;
		X2=(X2*27)%modulo2;
	}
	
	PREFIX.F=prefix[x].F;
	PREFIX.S=prefix[x].S;
	
	x1=prefix[x].F;
	x2=prefix[x].S;
	
	string ret="";
	
	for (int i=1; i<s.size()-x; i++)
	{
		if (i!=1 && PREFIX.F==x1 && PREFIX.S==x2) 
		{
			for (int j=i-1; j<=i-1+x; j++)
				ret+=s[j];
				
			return ret;
		}
		
		x1=(x1-(X1*int(s[i-1]-'a'+1))%modulo1+modulo1)%modulo1;
		x2=(x2-(X2*int(s[i-1]-'a'+1))%modulo2+modulo2)%modulo2;
		
		x1=((x1*27)%modulo1+int(s[i+x]-'a'+1))%modulo1;
		x2=((x2*27)%modulo2+int(s[i+x]-'a'+1))%modulo2;
	}
	
	ret="Just a legend";
	
	return ret;
}
main ()
{
	cin>>s;
	
	long long x1=0,x2=0;
	
	for (int i=0; i<s.size(); i++)
	{
		x1=((x1*27)%modulo1+int(s[i]-'a'+1))%modulo1;
		x2=((x2*27)%modulo2+int(s[i]-'a'+1))%modulo2;
		
		prefix[i].F=x1;
		prefix[i].S=x2;
	}
	
	x1=0;
	x2=0;
	
	long long X1=1,X2=1;
	
	for (int i=s.size()-1; i>=0; i--)
	{
		x1=(x1+(X1*int(s[i]-'a'+1)%modulo1))%modulo1;
		x2=(x2+(X2*int(s[i]-'a'+1)%modulo2))%modulo2;
	
		if (x1==prefix[s.size()-i-1].F && x2==prefix[s.size()-i-1].S) v.push_back(s.size()-i);
		
		X1=(X1*27)%modulo1;
		X2=(X2*27)%modulo2;
	}
	
	sort(v.begin(),v.end());
	
	int l=0;
	int r=v.size()-1;
	int mid=0;
	
	string ans="Just a legend";
	
	while (l<=r)
	{
		mid=(l+r)/2;
		
		string S=check(v[mid]);
		
		if (S=="Just a legend") 
		{
			r=mid-1;
		}
			else
		{
			ans=S;
			l=mid+1;
		}
	}
	
	cout<<ans<<endl;
}