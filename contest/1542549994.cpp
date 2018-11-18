#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb(x) push_back(x)
#define mod 1000000007
int main()
{
	ios_base::sync_with_stdio(false);
	string pass,s;
	cin>>pass;
	vector <string> v;
	ll n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		v.pb(s);
	}
	int a=0,b=0,c=0;
	for(i=0;i<n;i++)
	{
		if(v[i][1]==pass[0])
		a=1;
		if(v[i][0]==pass[1])
		b=1;
		if(pass.compare(v[i])==0)
		{
			c=1;
			break;
		}
	}
	if(c==1||(a==1&&b==1))
	cout<<"YES";
	else
	cout<<"NO";
}