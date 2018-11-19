#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	int f1  = 0 , f2 = 0;
	while(n--)
	{
		string x;
		cin>>x;
		if( s[0] == x[0]  && s[1] == x[1] )
		{
			cout<<"YES";
			return 0;
		}
        if( s[0] == x[1])
        {
        	f1 = 1;
        	
        }
        if( s[1] == x[0])
		{
			f2 = 1;
		}
	}
	if( f1 == 1 && f2 == 1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
	
}