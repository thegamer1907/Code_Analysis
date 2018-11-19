#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	string p,t;
	long long i,n,a,b,c,d;
	cin>>p>>n;
	a=0;
	b=0;
	c=0;
	d=0;
	for(i=0;i<n;i++)
	{
		cin>>t;
		if(t==p)
			d++;
		if(t[0]==p[1]&&t[1]==p[0])
			c++;
		else if(t[0]==p[1])
			b++;
		else if(t[1]==p[0])
			a++;
	}
	if(d>0||(c>0)||(a>0&&b>0))
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	return 0;
}
