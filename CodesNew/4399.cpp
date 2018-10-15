#include<bits/stdc++.h>
#define int long long
using namespace std;
string takeover(string a,string b)
{
	int l=min(a.size(),b.size()),j=0;
	bool fc=true;
	string c;
	for(;j<l;j++)
	{
		if(a[j]>b[j] && fc)
		{
			break;
		}
		else if(a[j]<b[j])
		{
			fc=false;
			break;
		}
		c+=a[j];
	}
	if(fc==false)
	for(;j<a.size();j++)
	{
		c+=a[j];
	}
	return c;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    }
    for(int i=n-2;i>=0;i--)
    {
    	a[i]=takeover(a[i],a[i+1]);
    	
    }
    for(int i=0;i<n;i++)
    {
    	cout<<a[i]<<"\n";
    }
}