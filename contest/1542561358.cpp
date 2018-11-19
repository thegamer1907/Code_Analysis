#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	bool a=false,b=false;
	int n;
	cin>>n;
	for(int i=0;i<n;++i)
	{
		string h;
		cin>>h;
		if(h[0]==s[0] && h[1]==s[1])
		{
			a=true;
			b=true;
		}
	 if(h[1]==s[0])
			a=true;
			 if(h[0]==s[1])
				b=true;
	}
	if(a && b)
			{
			
			cout<<"YES";
			return 0;
		}
	cout<<"NO";
	return 0;
}