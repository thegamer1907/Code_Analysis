#include <bits/stdc++.h>

using namespace std;

int main()
{
	string p;
	cin >> p;
	int n;
	cin >> n;
	string s[n];
	int flag=0;
	for(int i=0; i<n; i++)
	{
		cin >>s[i];
		if(s[i]==p)
			flag=1;
		else if(s[i][1]==p[0] && s[i][0]==p[1])
			flag=1;
	}
	if(flag==1)
		cout<<"YES"<<endl;
	else
	{
		int f=0,se=0;
		for(int i=0; i<n; i++)
		{
			if(s[i][0]==p[1])
				se=1;
			if(s[i][1]==p[0])
				f=1;	
		}
		if(se && f)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
 	return 0;
}

