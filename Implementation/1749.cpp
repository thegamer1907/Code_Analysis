#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int j=1,k=0;
	for(int i=1;i<str.length();i++)
	{
		if(str[i]=='0' )
		{
			if(str[i-1]=='0')
			j++;
			else
			j=1;
		}
		else if(str[i]=='1')
		{
			if(str[i-1]=='1')
			j++;
			else
			j=1;
		}
		if(j>6)
			k++;
	}
	if(k>0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
	
}
