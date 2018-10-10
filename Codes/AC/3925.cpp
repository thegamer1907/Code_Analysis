#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll b,s,c;
ll ob,os,oc;
ll pb,ps,pc;
ll m;
bool check(ll t)
{
    ll req=0,z=0;
    req+=max(z,((t*b)-(ob))*pb);
    req+=max(z,((t*s)-(os))*ps);
    req+=max(z,((t*c)-(oc))*pc);
    if(req<=m)
     return true;
    else
     return false;
}
int main() {
	string s1;
	b=0;
	s=0;
	c=0;
	cin>>s1;
	for(int i=0;i<s1.length();i++)
	{
	    if(s1[i]=='B')
	     b++;
	    else if(s1[i]=='C')
	     c++;
	    else 
	     s++;
	}
	cin>>ob>>os>>oc;
	cin>>pb>>ps>>pc;
	cin>>m;
	ll l=0,h=100000000000000,mid;
	while(l<h-1)
	{
	    mid = (h+l)/2;
	    if(check(mid))
	     l=mid;
	    else
	     h=mid;
	}
	cout<<l;
	return 0;
}
