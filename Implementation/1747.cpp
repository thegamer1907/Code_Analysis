#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i=0;
	int seven=1;
	while(i<s.size() && seven!=7)
	{
		if(s[i-1]==s[i])
		{
			seven++;
		}
		else
		{
			seven=1;
		}
		i++;
	}
	if(seven==7)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
