#include <bits/stdc++.h>

using namespace std;
vector<string> v;
vector<string> v2;
int main()
{
	long long a,b,h=0,d=0,f=1;
	cin>>a>>b;
	string s;
	for(long long i=0;i<a;i++)
	{
		cin>>s;
		v.push_back(s);
	}
	for(long long j=0;j<b;j++)
	{
		cin>>s;
		v2.push_back(s);
	}
	sort(v.begin(),v.end());
	sort(v2.begin(),v2.end());
    if(a == b)
    {
    	for(long long i=0;i<a;i++)
    	{
    		for(long long j=0;j<a;j++)
    		{
    			if(v[i]  == v2[j])
    			{
    				f++;
    				break;
    			}
    		}
    	}
    	if(f%2==0)
    	{
    		cout<<"YES";
    	}
    	else
    		cout<<"NO";
    }
    else if(a>b)
    	cout<<"YES";
    else
    	cout<<"NO";
    return 0;
}
	