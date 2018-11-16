#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int i;
	if(str.length()<7)
	cout<<"NO\n";
	else
	{
		int flag = 0;
		for(i=0;i<(str.length()-6);i++)
		{
			if(str[i]==str[i+1] && str[i]==str[i+2] && str[i]==str[i+3] && str[i]==str[i+4] && str[i]==str[i+5] && str[i]==str[i+6])
			{
				flag = 1;
				break;
			}
		}
		if(flag==1)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}