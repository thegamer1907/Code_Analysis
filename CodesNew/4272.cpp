#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
#define ll long long
#define endl '\n'
#define pi 3.14159265
int main()
{
    IOS;
    ll n;
    cin>>n;
    string s[n];
    for(ll i=0;i<n;i++)	
    {
    	char ch;
    	cin>>ch>>s[i];
    }
    ll ans=0;
    for(ll i=n-1;i>0;i--)
    {
    	ll ch=-1;
    	ll flag=0;
    	for(ll j=0;j<min(s[i].length(),s[i-1].length());j++)
    	{
    		if(s[i][j]==s[i-1][j])
    			continue;
    		if(s[i-1][j]<s[i][j])
    		{
    			flag=1;
    			break;
    		}
    		ch=j;
    		break;
    	}
    	if(flag==1)
    		continue;
    	if(ch==-1)
    	{
    		s[i-1]=s[i-1].substr(0,s[i].length());
    		continue;
    	}
    	s[i-1]=s[i-1].substr(0,ch);
    }
    for(ll i=0;i<n;i++)
    	cout<<"#"<<s[i]<<endl;
	return 0;
}
